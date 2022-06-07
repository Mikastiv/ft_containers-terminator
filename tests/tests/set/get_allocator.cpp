/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_allocator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:06:30 by mleblanc          #+#    #+#             */
/*   Updated: 2022/06/07 17:15:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_get_allocator()
{
    intset m;

    track_allocator<NAMESPACE::pair<const int, std::string> > alloc = m.get_allocator();

    NAMESPACE::pair<const int, std::string>* buff = alloc.allocate(64);

    alloc.deallocate(buff, 64);
}

MAIN(set_test_get_allocator)
