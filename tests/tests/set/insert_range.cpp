/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:24:03 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_insert_range()
{
    SETUP_ARRAYS();

    {
        strset m;

        PRINT_ALL(m);

        m.insert(str_arr, str_arr + 5);

        PRINT_ALL(m);

        m.insert(str_arr + 5, str_arr + 14);

        PRINT_ALL(m);

        m.insert(str_arr, str_arr + 9);

        PRINT_ALL(m);

        m.insert(str_arr + 26, str_arr + str_size);

        PRINT_ALL(m);

        m.insert(str_arr + 14, str_arr + 26);

        PRINT_ALL(m);
    }

    {
        intset m;

        PRINT_ALL(m);

        m.insert(int_arr + 16, int_arr + 16);

        PRINT_ALL(m);

        m.insert(int_arr + 1, int_arr + 7);

        PRINT_ALL(m);

        m.insert(int_arr, int_arr + 1);

        PRINT_ALL(m);

        m.insert(int_arr, int_arr + 17);

        PRINT_ALL(m);

        m.insert(int_arr, int_arr + int_size);

        PRINT_ALL(m);
    }
}

MAIN(set_test_insert_range)
