/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:46:34 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:54:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"
#include <limits>

void set_test_upper_bound()
{
    SETUP_ARRAYS();

    {
        intset m(int_arr, int_arr + int_size);

        m.insert(34);
        m.insert(3468);
        m.insert(96533);
        m.insert(1954894589);
        m.insert(7754322);
        m.insert(3632);
        m.insert(3);
        m.insert(4);
        m.insert(-873487);
        m.insert(-95763433);
        m.insert(453834782);
        m.insert(19458942);
        m.insert(1245689793);

        intset::iterator b = m.upper_bound(98583944);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(209485948);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458942);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458941);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458943);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(-1);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(3);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(4);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(5);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(0);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(std::numeric_limits<int>::max());

        PRINT_BOUND(b, m.end());

        m.insert(std::numeric_limits<int>::max());

        b = m.upper_bound(std::numeric_limits<int>::max());

        PRINT_BOUND(b, m.end());
    }

    {
        intset temp(int_arr, int_arr + int_size);

        temp.insert(34);
        temp.insert(3468);
        temp.insert(96533);
        temp.insert(1954894589);
        temp.insert(7754322);
        temp.insert(3632);
        temp.insert(3);
        temp.insert(4);
        temp.insert(-873487);
        temp.insert(-95763433);
        temp.insert(453834782);
        temp.insert(19458942);
        temp.insert(1245689793);

        const intset m(temp);

        intset::const_iterator b = m.upper_bound(98583944);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(209485948);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458942);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458941);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(19458943);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(-1);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(3);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(4);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(5);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(0);

        PRINT_BOUND(b, m.end());

        b = m.upper_bound(std::numeric_limits<int>::max());

        PRINT_BOUND(b, m.end());
    }

    {
        const intset m;

        intset::const_iterator b = m.upper_bound(5);

        PRINT_BOUND(b, m.end());
    }
}

MAIN(set_test_upper_bound)
