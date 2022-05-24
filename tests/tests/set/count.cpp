/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:33:51 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:54:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_count()
{
    SETUP_ARRAYS();

    {
        intset m(int_arr, int_arr + int_size);

        intset::size_type c = m.count(64);

        PRINT_LINE("Count:", c);

        c = m.count(145);

        PRINT_LINE("Count:", c);

        c = m.count(11);

        PRINT_LINE("Count:", c);

        m.insert(34);
        m.insert(2);
        m.insert(9);
        m.insert(3);
        m.insert(22);
        m.insert(10);

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

MAIN(set_test_count)
