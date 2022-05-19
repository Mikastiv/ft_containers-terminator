/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_gt.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:23:27 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 14:43:27 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "map_prelude.hpp"

void map_test_comparisons_gt()
{
    SETUP_ARRAYS();

    {
        intmap m;
        intmap n;

        if (m >= n) {
            PRINT_MSG("Greater or Equal");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + 1);
        intmap n;

        if (m >= n) {
            PRINT_MSG("Greater or Equal.");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + 1);
        intmap n;

        if (n >= m) {
            PRINT_MSG("Greater or Equal..");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + 1);
        intmap n(intstr_arr, intstr_arr + 1);

        if (n >= m) {
            PRINT_MSG("Greater or Equal...");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);
        intmap n(intstr_arr, intstr_arr + intstr_size);

        if (n >= m) {
            PRINT_MSG("Greater or Equal....");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + 5);
        intmap n;

        n.insert(NAMESPACE::make_pair(5, "Hello"));
        n.insert(NAMESPACE::make_pair(7, "Hello"));
        n.insert(NAMESPACE::make_pair(8, "Hello"));
        n.insert(NAMESPACE::make_pair(1, "Hello"));
        n.insert(NAMESPACE::make_pair(0, "Hello"));

        if (n >= m) {
            PRINT_MSG("Greater or Equal.....");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + 5);
        intmap n(intstr_arr, intstr_arr + 4);

        n.insert(NAMESPACE::make_pair(5, "Hello"));

        if (n >= m) {
            PRINT_MSG("Greater or Equal......");
        }
    }
}

MAIN(map_test_comparisons_gt)
