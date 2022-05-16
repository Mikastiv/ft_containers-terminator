/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:03:47 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 01:43:59 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_ctor()
{
    // Default
    {
        intmap m;

        PRINT_ALL(m);

        leak_checker::check_alive_objects();
    }

    // Compare/Allocator
    {
        track_allocator<NAMESPACE::pair<const std::string, std::string> > alloc;
        strmap m(std::less<std::string>(), alloc);

        PRINT_ALL(m);

        leak_checker::check_alive_objects();
    }
}

MAIN(map_test_ctor)
