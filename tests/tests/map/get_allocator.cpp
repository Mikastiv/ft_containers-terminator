/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:25:38 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 11:28:25 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_get_allocator()
{
    intmap m;

    track_allocator<NAMESPACE::pair<const int, std::string> > alloc = m.get_allocator();

    NAMESPACE::pair<const int, std::string>* buff = alloc.allocate(64);

    std::cout << "a leak is normal here\n";
    leak_checker::check_leaks();

    alloc.deallocate(buff, 64);
}

MAIN(map_test_get_allocator)
