/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   track_allocator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:31:18 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/20 19:33:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <memory>

#include "memory_tracker.hpp"

template <typename T>
class track_allocator
{
public:
    // clang-format off
    typedef T              value_type;
    typedef T*             pointer;
    typedef const T*       const_pointer;
    typedef T&             reference;
    typedef const T&       const_reference;
    typedef std::size_t    size_type;
    typedef std::ptrdiff_t difference_type;

    // clang-format on

    template <typename U>
    struct rebind {
        typedef track_allocator<U> other;
    };

public:
    track_allocator()
    {
    }

    track_allocator(const track_allocator&)
    {
    }

    template <typename U>
    track_allocator(const track_allocator<U>&)
    {
    }

    ~track_allocator()
    {
    }

public:
    bool operator==(const track_allocator&)
    {
        return true;
    }

    bool operator!=(const track_allocator&)
    {
        return false;
    }

public:
    pointer address(reference x) const
    {
        return &x;
    }

    const_pointer address(const_reference x) const
    {
        return &x;
    }

    T* allocate(std::size_t n, const void* hint = 0)
    {
        T* block = std::allocator<T>().allocate(n, hint);
        tracker.add_allocation((void*)block, n);
        return block;
    }

    void deallocate(T* p, std::size_t n)
    {
        if (p == NULL) {
            std::cout << "Called deallocate on null" << std::endl;
        }

        dealloc_result result = tracker.remove_allocation((void*)p, n);

        switch (result) {
            case DEALLOC_BAD_POINTER:
                std::cout << "Called deallocate on non-allocated address: " << p << std::endl;
                break;
            case DEALLOC_BAD_SIZE:
                std::cout << "Called deallocate with wrong block size: " << n << " (expected "
                          << tracker.block_size(p) << ")" << std::endl;
                break;
            default:;
        }
        std::allocator<T>().deallocate(p, n);
    }

    size_type max_size() const
    {
        return std::allocator<T>().max_size();
    }

    void construct(pointer p, const_reference val)
    {
        if (p == NULL) {
            std::cout << "Called construct on null" << std::endl;
        }

        const bool result = tracker.add_constructor_call((void*)p);

        if (!result) {
            std::cout << "Called construct on initialized memory: " << p << std::endl;
        }

        std::allocator<T>().construct(p, val);
    }

    void destroy(pointer p)
    {
        if (p == NULL) {
            std::cout << "Called destroy on null" << std::endl;
        }

        const bool result = tracker.add_destructor_call((void*)p);

        if (!result) {
            std::cout << "Called destroy on uninitialized memory: " << p << std::endl;
        }

        std::allocator<T>().destroy(p);
    }

private:
    memory_tracker tracker;
};
