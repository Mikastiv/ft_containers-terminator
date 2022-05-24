/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riterator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:17:15 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_riterator()
{
    SETUP_ARRAYS();

    {
        intset m;

        PRINT_ALL(m);
    }

    {
        strset m(str_arr, str_arr + str_size);

        strset::reverse_iterator it = m.rbegin();
        strset::reverse_iterator it2 = m.rbegin();
        strset::const_reverse_iterator cit = m.rbegin();
        strset::const_reverse_iterator cit2 = m.rbegin();

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

        intset::reverse_iterator it = m.rbegin();
        intset::reverse_iterator it2 = m.rbegin();
        intset::const_reverse_iterator cit = m.rbegin();
        intset::const_reverse_iterator cit2 = m.rbegin();

        for (intset::reverse_iterator i = m.rbegin(); i != m.rend(); ++i) {
            PRINT_LINE("It:", *i);
        }

        PRINT_ALL(m);

        PRINT_IT_PTR(m.rbegin());
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

MAIN(set_test_riterator)
