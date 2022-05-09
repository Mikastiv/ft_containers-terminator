/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_tracker.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:43:16 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/08 18:18:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_tracker.hpp"
#include <cstddef>
#include <map>

std::size_t memory_tracker::allocation_count()
{
    return allocations.size();
}

bool memory_tracker::allocation_empty()
{
    return allocations.empty();
}

std::size_t memory_tracker::block_size(void* ptr)
{
    std::map<void*, std::size_t>::iterator it = allocations.find(ptr);

    return it != allocations.end() ? it->second : 0;
}

void memory_tracker::add_allocation(void* ptr, std::size_t size)
{
    allocations.insert(std::make_pair(ptr, size));
}

dealloc_result memory_tracker::remove_allocation(void* ptr, std::size_t size)
{
    std::map<void*, std::size_t>::iterator it = allocations.find(ptr);

    if (it == allocations.end()) {
        return DEALLOC_BAD_POINTER;
    }
    if (it->second != size) {
        return DEALLOC_BAD_SIZE;
    }

    allocations.erase(it);
    return DEALLOC_SUCCESS;
}

std::size_t memory_tracker::constructs_count()
{
    return constructs.size();
}

bool memory_tracker::constructs_empty()
{
    return constructs.empty();
}

bool memory_tracker::add_constructor_call(void* ptr)
{
    std::set<void*>::iterator it = constructs.find(ptr);

    if (it != constructs.end()) {
        return false;
    }

    constructs.insert(ptr);
    return true;
}

bool memory_tracker::add_destructor_call(void* ptr)
{
    std::set<void*>::iterator it = constructs.find(ptr);

    if (it == constructs.end()) {
        return false;
    }

    constructs.erase(ptr);
    return true;
}

std::map<void*, std::size_t> memory_tracker::allocations = std::map<void*, std::size_t>();
std::set<void*> memory_tracker::constructs = std::set<void*>();
