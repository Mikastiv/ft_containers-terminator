/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_lt.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:55:29 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:55:50 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_comparisons_lt()
{
    SETUP_ARRAYS();

    {
        intset m;
        intset n;

        if (m < n) {
            PRINT_MSG("Less");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (m < n) {
            PRINT_MSG("Less.");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (n < m) {
            PRINT_MSG("Less..");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n(intstr_arr, intstr_arr + 1);

        if (n < m) {
            PRINT_MSG("Less...");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + intstr_size);
        intset n(intstr_arr, intstr_arr + intstr_size);

        if (n < m) {
            PRINT_MSG("Less....");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 5);
        intset n;

        n.insert(5);
        n.insert(7);
        n.insert(8);
        n.insert(1);
        n.insert(0);

        if (n < m) {
            PRINT_MSG("Less.....");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 5);
        intset n(intstr_arr, intstr_arr + 4);

        n.insert(5);

        if (n < m) {
            PRINT_MSG("Less......");
        }
    }
}

MAIN(set_test_comparisons_lt)
