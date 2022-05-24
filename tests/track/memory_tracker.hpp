/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation_map.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:39:23 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/08 18:17:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>
#include <map>
#include <set>

enum dealloc_result {
    DEALLOC_BAD_POINTER,
    DEALLOC_BAD_SIZE,
    DEALLOC_SUCCESS
};

class memory_tracker
{
public:
    static std::size_t allocation_count();
    static bool allocation_empty();
    static std::size_t block_size(void* ptr);
    static void add_allocation(void* ptr, std::size_t size);
    static dealloc_result remove_allocation(void* ptr, std::size_t size);
    static std::size_t constructs_count();
    static bool constructs_empty();
    static bool add_constructor_call(void* ptr);
    static bool add_destructor_call(void* ptr);

private:
    static std::map<void*, std::size_t> allocations;
    static std::set<void*> constructs;
};
