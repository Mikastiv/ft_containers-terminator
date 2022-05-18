/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_comp.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:27:49 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/18 17:34:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_key_comp()
{
    SETUP_ARRAYS();

    {
        strmap m(strstr_arr, strstr_arr + strstr_size);

        strmap::iterator it = m.begin();

        strmap::const_iterator cit = m.begin();
        strmap::key_compare comp = m.key_comp();

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(cit, 5);
        std::advance(it, 14);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 7);
        std::advance(cit, 3);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -3);
        std::advance(cit, 12);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -1);
        std::advance(cit, 1);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);

        intmap::iterator it = m.begin();

        intmap::const_iterator cit = m.begin();

        intmap::key_compare comp = m.key_comp();

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 14);
        std::advance(cit, 5);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, 7);
        std::advance(cit, 3);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -3);
        std::advance(cit, 12);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }

        std::advance(it, -1);
        std::advance(cit, 1);

        if (comp(it->first, cit->first)) {
            PRINT_MSG("Less");
        } else {
            PRINT_MSG("Not Less");
        }
    }
}

MAIN(map_test_key_comp)
