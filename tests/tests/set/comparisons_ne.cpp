/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_ne.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:54:40 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:55:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_comparisons_ne()
{
    SETUP_ARRAYS();

    {
        intset m;
        intset n;

        if (m != n) {
            PRINT_MSG("Not Equal");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (m != n) {
            PRINT_MSG("Not Equal.");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (n != m) {
            PRINT_MSG("Not Equal..");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n(intstr_arr, intstr_arr + 1);

        if (n != m) {
            PRINT_MSG("Not Equal...");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + intstr_size);
        intset n(intstr_arr, intstr_arr + intstr_size);

        if (n != m) {
            PRINT_MSG("Not Equal....");
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

        if (n != m) {
            PRINT_MSG("Not Equal.....");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 5);
        intset n(intstr_arr, intstr_arr + 4);

        n.insert(5);

        if (n != m) {
            PRINT_MSG("Not Equal......");
        }
    }
}

MAIN(set_test_comparisons_ne)
