/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 00:04:03 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/18 00:19:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_erase()
{
    SETUP_ARRAYS();

    {
        intmap m(intstr_arr, intstr_arr + 25);

        intmap::iterator it = m.begin();

        m.erase(it);

        PRINT_ALL(m);

        it = m.begin();

        increment_iter(it, 21);

        m.erase(it);

        PRINT_ALL(m);

        it = m.end();

        decrement_iter(it, 10);

        m.erase(it);

        PRINT_ALL(m);

        it = m.end();

        decrement_iter(it, 3);

        m.erase(it);

        PRINT_ALL(m);

        it = m.end();

        decrement_iter(it, 1);

        m.erase(it);

        PRINT_ALL(m);

        it = m.begin();

        increment_iter(it, 1);

        m.erase(it);

        PRINT_ALL(m);

        for (it = m.begin(); it != m.end(); it = m.begin()) {
            m.erase(it);
            PRINT_ALL(m);
        }
    }
}

MAIN(map_test_erase)
