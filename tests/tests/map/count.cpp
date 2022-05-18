/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:33:27 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/18 14:54:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_count()
{
    SETUP_ARRAYS();

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);

        intmap::size_type c = m.count(64);

        PRINT_LINE("Count:", c);

        c = m.count(145);

        PRINT_LINE("Count:", c);

        c = m.count(11);

        PRINT_LINE("Count:", c);

        m.insert(NAMESPACE::make_pair(34, "seiurhg8347wo83twerw"));
        m.insert(NAMESPACE::make_pair(2, "dsghesrzarherheat43"));
        m.insert(NAMESPACE::make_pair(9, "awgfawe4t3A4YSDFGAS"));
        m.insert(NAMESPACE::make_pair(3, "dzfg45yrthsdfgshju"));
        m.insert(NAMESPACE::make_pair(22, "j564wedfshgj6ee5yegrs"));
        m.insert(NAMESPACE::make_pair(10, "cfngcvcx56;oiliuee"));

        c = m.count(34);

        PRINT_LINE("Count:", c);

        c = m.count(2);

        PRINT_LINE("Count:", c);

        c = m.count(9);

        PRINT_LINE("Count:", c);

        m.erase(9);

        c = m.count(9);

        PRINT_LINE("Count:", c);

        c = m.count(10);

        PRINT_LINE("Count:", c);

        c = m.count(22);

        PRINT_LINE("Count:", c);
    }
}

MAIN(map_test_count)
