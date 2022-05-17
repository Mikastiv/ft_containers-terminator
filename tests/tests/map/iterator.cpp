/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:38:20 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 15:48:27 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_iterator()
{
    SETUP_ARRAYS();

    {
        intmap m;

        PRINT_ALL(m);
    }

    {
        strmap m(strstr_arr, strstr_arr + strstr_size);

        strmap::iterator it = m.begin();
        strmap::iterator it2 = m.begin();
        strmap::const_iterator cit = m.begin();
        strmap::const_iterator cit2 = m.begin();

        if (it == it2) {
            PRINT_MSG("Equal");
        }
        if (it == cit) {
            PRINT_MSG("Equal.");
        }
        if (cit == cit2) {
            PRINT_MSG("Equal..");
        }
        if (it != it2) {
            PRINT_MSG("Not Equal");
        }
        if (it != cit) {
            PRINT_MSG("Not Equal.");
        }
        if (cit != cit2) {
            PRINT_MSG("Not Equal..");
        }

        PRINT_PAIR_PTR(++it);
        PRINT_PAIR_PTR(++cit);

        if (it == it2) {
            PRINT_MSG("Equal...");
        }
        if (it == cit) {
            PRINT_MSG("Equal....");
        }
        if (cit == cit2) {
            PRINT_MSG("Equal.....");
        }
        if (it != it2) {
            PRINT_MSG("Not Equal...");
        }
        if (it != cit) {
            PRINT_MSG("Not Equal....");
        }
        if (cit != cit2) {
            PRINT_MSG("Not Equal.....");
        }

        ++it2;

        if (it == it2) {
            PRINT_MSG("Equal........");
        }

        --it;
        --it2;

        if (it == it2) {
            PRINT_MSG("Equal.........");
        }
    }

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);

        intmap::iterator it = m.begin();
        intmap::iterator it2 = m.begin();
        intmap::const_iterator cit = m.begin();
        intmap::const_iterator cit2 = m.begin();

        PRINT_ALL(m);

        it->second = "Hello";

        PRINT_PAIR_PTR(m.begin());
        PRINT_PAIR_REF(*it);
        PRINT_PAIR_PTR(++it);
        PRINT_PAIR_PTR(it2++);
        PRINT_PAIR_REF(*it++);
        PRINT_PAIR_PTR(cit++);
        PRINT_PAIR_PTR(cit2++);
        PRINT_PAIR_PTR(++cit);
        PRINT_PAIR_PTR(++cit2);
        PRINT_PAIR_PTR(it2);
        PRINT_PAIR_PTR(cit2);
        PRINT_PAIR_PTR(it++);
        PRINT_PAIR_PTR(it++);
        PRINT_PAIR_PTR(it++);
        PRINT_PAIR_PTR(it2++);
        PRINT_PAIR_PTR(it2++);
        PRINT_PAIR_PTR(++it2);
        PRINT_PAIR_REF(*cit);
        PRINT_PAIR_REF(*cit--);
        PRINT_PAIR_REF(*it--);
        PRINT_PAIR_PTR(it--);
        PRINT_PAIR_PTR(--it);
        PRINT_PAIR_PTR(--cit2);
        PRINT_PAIR_PTR(cit2);
        PRINT_PAIR_REF(*cit2);
        PRINT_PAIR_REF(*it2);
        it = it2;
        PRINT_PAIR_REF(*it);
        PRINT_PAIR_REF(*it2);
        cit = cit2;
        PRINT_PAIR_REF(*cit);
        PRINT_PAIR_REF(*cit2);
    }
}

MAIN(map_test_iterator)
