/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:51:45 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 22:55:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_ctor()
{
    // Default
    {
        intset m;

        PRINT_ALL(m);
    }

    // Compare/Allocator
    {
        track_allocator<NAMESPACE::pair<const std::string, std::string> > alloc;
        strset m(std::less<std::string>(), alloc);

        PRINT_ALL(m);
    }
}

MAIN(set_test_ctor)
