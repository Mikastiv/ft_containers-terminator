/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:03:47 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 21:28:42 by mleblanc         ###   ########.fr       */
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
}

MAIN(map_test_ctor)
