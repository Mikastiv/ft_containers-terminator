/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_comp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:48:19 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_key_comp()
{
    SETUP_ARRAYS();

    {
        strset m(str_arr, str_arr + str_size);

        strset::iterator it = m.begin();

        strset::const_iterator cit = m.begin();
        strset::key_compare comp = m.key_comp();

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
        intset m(int_arr, int_arr + int_size);

        intset::iterator it = m.begin();

        intset::const_iterator cit = m.begin();

        intset::key_compare comp = m.key_comp();

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

MAIN(set_test_key_comp)
