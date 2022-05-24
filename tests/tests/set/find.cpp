/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:35:11 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_find()
{
    SETUP_ARRAYS();

    {
        strset m(str_arr, str_arr + str_size);

        strset::iterator it = m.find("ABCD");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        m.insert("12345");
        m.insert("abcd");
        m.insert("123");
        m.insert("1234");
        m.insert("ab");
        m.insert("yz");
        m.insert("64");

        it = m.find("12345");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        it = m.find("1234");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        it = m.find("123");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        it = m.find("123");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        it = m.find("z");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        const strset cm(m);

        strset::const_iterator cit = cm.find("ABCD");

        if (cit != cm.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = cm.find("64");

        if (cit != cm.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = m.find("12345");

        if (cit != m.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = m.find("1234");

        if (cit != m.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = m.find("123");

        if (cit != m.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = m.find("123");

        if (cit != m.end()) {
            PRINT_LINE("It:", *cit);
        }

        cit = m.find("z");

        if (cit != m.end()) {
            PRINT_LINE("It:", *cit);
        }
    }

    {
        const intset cm;

        if (cm.find(0) != cm.end()) {
            PRINT_IT_PTR(cm.find(0));
        }

        intset m;

        m.insert(123);

        if (m.find(0) != m.end()) {
            PRINT_IT_PTR(m.find(0));
        }
        if (m.find(123) != m.end()) {
            PRINT_IT_PTR(m.find(123));
        }
    }
}

MAIN(set_test_find)
