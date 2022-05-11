/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:48:03 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 22:32:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_get_allocator()
{
    INTVECTOR v;

    track_allocator<int> alloc = v.get_allocator();

    int* buff = alloc.allocate(2048 * 5);

    std::cout << "a leak is normal here\n";
    leak_checker::check_leaks();

    alloc.deallocate(buff, 2048 * 5);
}

MAIN(vec_test_get_allocator)
