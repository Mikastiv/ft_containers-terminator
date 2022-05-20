/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:24:03 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:24:22 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_insert_range()
{
    SETUP_ARRAYS();

    {
        strset m;

        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + 5);

        PRINT_ALL(m);

        m.insert(strstr_arr + 5, strstr_arr + 14);

        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + 9);

        PRINT_ALL(m);

        m.insert(strstr_arr + 26, strstr_arr + strstr_size);

        PRINT_ALL(m);

        m.insert(strstr_arr + 14, strstr_arr + 26);

        PRINT_ALL(m);
    }

    {
        intset m;

        PRINT_ALL(m);

        m.insert(intstr_arr + 16, intstr_arr + 16);

        PRINT_ALL(m);

        m.insert(intstr_arr + 1, intstr_arr + 7);

        PRINT_ALL(m);

        m.insert(intstr_arr, intstr_arr + 1);

        PRINT_ALL(m);

        m.insert(intstr_arr, intstr_arr + 17);

        PRINT_ALL(m);

        m.insert(intstr_arr, intstr_arr + intstr_size);

        PRINT_ALL(m);
    }
}

MAIN(set_test_insert_range)
