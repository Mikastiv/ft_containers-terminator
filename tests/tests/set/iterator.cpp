/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:12:09 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_iterator()
{
    SETUP_ARRAYS();

    {
        intset m;

        PRINT_ALL(m);
    }

    {
        strset m(str_arr, str_arr + str_size);

        strset::iterator it = m.begin();
        strset::iterator it2 = m.begin();
        strset::const_iterator cit = m.begin();
        strset::const_iterator cit2 = m.begin();

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

        PRINT_IT_PTR(++it);
        PRINT_IT_PTR(++cit);

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
        intset m(int_arr, int_arr + int_size);

        intset::iterator it = m.begin();
        intset::iterator it2 = m.begin();
        intset::const_iterator cit = m.begin();
        intset::const_iterator cit2 = m.begin();

        PRINT_ALL(m);

        PRINT_IT_PTR(m.begin());
        PRINT_LINE("It:", *it);
        PRINT_IT_PTR(++it);
        PRINT_IT_PTR(it2++);
        PRINT_LINE("It:", *it++);
        PRINT_IT_PTR(cit++);
        PRINT_IT_PTR(cit2++);
        PRINT_IT_PTR(++cit);
        PRINT_IT_PTR(++cit2);
        PRINT_IT_PTR(it2);
        PRINT_IT_PTR(cit2);
        PRINT_IT_PTR(it++);
        PRINT_IT_PTR(it++);
        PRINT_IT_PTR(it++);
        PRINT_IT_PTR(it2++);
        PRINT_IT_PTR(it2++);
        PRINT_IT_PTR(++it2);
        PRINT_LINE("It:", *cit);
        PRINT_LINE("It:", *cit--);
        PRINT_LINE("It:", *it--);
        PRINT_IT_PTR(it--);
        PRINT_IT_PTR(--it);
        PRINT_IT_PTR(--cit2);
        PRINT_IT_PTR(cit2);
        PRINT_LINE("It:", *cit2);
        PRINT_LINE("It:", *it2);
        it = it2;
        PRINT_LINE("It:", *it);
        PRINT_LINE("It:", *it2);
        cit = cit2;
        PRINT_LINE("It:", *cit);
        PRINT_LINE("It:", *cit2);
    }
}

MAIN(set_test_iterator)
