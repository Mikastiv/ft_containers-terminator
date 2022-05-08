/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:23:40 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/08 19:12:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/memory_tracker.hpp"
#include "core/track_allocator.hpp"

int main()
{
    track_allocator<int> alloc;

    int* ptr = alloc.allocate(20);
    alloc.construct(ptr, 6);
    alloc.destroy(ptr);
    alloc.deallocate(ptr, 20);
}
