/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_le.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:56:21 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:57:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"
#include <limits>

void set_test_comparisons_le()
{
    SETUP_ARRAYS();

    {
        intset m;
        intset n;

        if (m <= n) {
            PRINT_MSG("Less or Equal");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (m <= n) {
            PRINT_MSG("Less or Equal.");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n;

        if (n <= m) {
            PRINT_MSG("Less or Equal..");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 1);
        intset n(intstr_arr, intstr_arr + 1);

        if (n <= m) {
            PRINT_MSG("Less or Equal...");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + intstr_size);
        intset n(intstr_arr, intstr_arr + intstr_size);

        if (n <= m) {
            PRINT_MSG("Less or Equal....");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 5);
        intset n;

        n.insert(std::numeric_limits<int>::max());
        n.insert(7);
        n.insert(8);
        n.insert(1);
        n.insert(0);

        if (n <= m) {
            PRINT_MSG("Less or Equal.....");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + 5);
        intset n(intstr_arr, intstr_arr + 4);

        n.insert(5);

        if (n <= m) {
            PRINT_MSG("Less or Equal......");
        }
    }
}

MAIN(set_test_comparisons_le)
