/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:05:35 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:05:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_assignment()
{
    SETUP_ARRAYS();

    {
        intset m1;
        intset m2;

        m1 = m2;

        PRINT_ALL(m1);

        m2 = intset(intstr_arr, intstr_arr + intstr_size);

        PRINT_ALL(m2);

        m1 = m2;

        PRINT_ALL(m1);

        m1 = intset(intstr_arr, intstr_arr + 10);

        PRINT_ALL(m1);

        m2 = m1;

        PRINT_ALL(m2);
    }

    {
        strset m1;
        strset m2;

        m1 = m2;

        PRINT_ALL(m1);

        m2 = strset(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m2);

        m1 = m2;

        PRINT_ALL(m1);

        m1 = strset(strstr_arr, strstr_arr + 10);

        PRINT_ALL(m1);

        m2 = m1;

        PRINT_ALL(m2);
    }
}

MAIN(set_test_assignment)
