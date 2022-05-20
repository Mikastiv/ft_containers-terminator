/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_comp.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:49:17 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:49:29 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_value_comp()
{
    SETUP_ARRAYS();

    {
        strset m(strstr_arr, strstr_arr + strstr_size);

        strset::iterator it = m.begin();

        strset::const_iterator cit = m.begin();
        strset::value_compare comp = m.value_comp();

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(cit, 5);
        std::advance(it, 14);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 7);
        std::advance(cit, 3);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -3);
        std::advance(cit, 12);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -1);
        std::advance(cit, 1);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }
    }

    {
        intset m(intstr_arr, intstr_arr + intstr_size);

        intset::iterator it = m.begin();

        intset::const_iterator cit = m.begin();

        intset::value_compare comp = m.value_comp();

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 14);
        std::advance(cit, 5);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 7);
        std::advance(cit, 3);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -3);
        std::advance(cit, 12);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -1);
        std::advance(cit, 1);

        if (comp(*it, *cit)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }
    }
}

MAIN(set_test_value_comp)
