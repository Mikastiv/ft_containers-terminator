/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prelude.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:35:37 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/08 21:11:25 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "track/leak_checker.hpp"
#include "track/track_allocator.hpp"

#define PRINT_FILE_LINE()                                                                          \
    {                                                                                              \
        std::cout << " (file: " << __FILE__ << ", line: " << __LINE__ << ")\n";                    \
    }

#define PRINT_LINE(msg, value)                                                                     \
    {                                                                                              \
        std::cout << msg << " " << value;                                                          \
        PRINT_FILE_LINE();                                                                         \
    }

#define PRINT_MSG(msg)                                                                             \
    {                                                                                              \
        std::cout << msg;                                                                          \
        PRINT_FILE_LINE();                                                                         \
    }

template <typename Iter>
void print_vector(Iter first, Iter last)
{
    for (Iter it = first; it != last; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

#define PRINT_VEC(vec)                                                                             \
    {                                                                                              \
        print_vector(vec.begin(), vec.end());                                                      \
    }

#define PRINT_SIZE(vec)                                                                            \
    {                                                                                              \
        PRINT_LINE("Size:", vec.size());                                                           \
    }

#define PRINT_ALL(vec)                                                                             \
    {                                                                                              \
        PRINT_SIZE(vec);                                                                           \
        PRINT_VEC(vec);                                                                            \
    }

#define CHECK_CAPACITY(vec)                                                                        \
    {                                                                                              \
        if (!(vec.capacity() >= vec.size())) {                                                     \
            PRINT_MSG("Capacity is smaller than size");                                            \
        }                                                                                          \
    }

#define CATCH_UNHANDLED_EX()                                                                       \
    catch (...)                                                                                    \
    {                                                                                              \
        std::cout << "unhandled exception";                                                        \
        PRINT_FILE_LINE();                                                                         \
    }

template <typename ForwardIt, typename T>
void iota(ForwardIt first, ForwardIt last, T value = T())
{
    while (first != last) {
        *first++ = value;
        ++value;
    }
}

#ifndef NAMESPACE
#define NAMESPACE ft
#endif

#ifdef SINGLE_BINARY
#define MAIN(test_func)
#else
#define MAIN(test_func)                                                                            \
    int main()                                                                                     \
    {                                                                                              \
        test_func();                                                                               \
    }
#endif
