/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:33:54 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"
#include <limits>

void set_test_random()
{
    SETUP_ARRAYS();

    {
        strset m(str_arr, str_arr + 16);

        strset::iterator it = m.find("Hello");

        if (it != m.end()) {
            PRINT_LINE("It:", *it);
        }

        PRINT_ALL(m);

        m.insert(str_arr, str_arr + str_size);

        PRINT_ALL(m);

        m.erase(m.begin());

        PRINT_ALL(m);

        it = m.begin();
        std::advance(it, 10);

        m.erase(it, m.end());

        PRINT_ALL(m);

        strset::size_type s = m.erase("1234");

        PRINT_ALL(m);
        PRINT_LINE("S:", s);

        m.clear();

        PRINT_ALL(m);

        it = m.insert(m.begin(), "");

        PRINT_LINE("Count:", m.count(""));

        PRINT_LINE("It:", *it);
        PRINT_ALL(m);

        m.insert(str_arr, str_arr + str_size);

        strset n(str_arr, str_arr + 10);

        m.swap(n);

        PRINT_ALL(m);
        PRINT_ALL(n);

        PRINT_EQ_RANGE(m.equal_range("abcd"), m.end());
        PRINT_BOUND(m.lower_bound("123"), m.end());
        PRINT_BOUND(m.upper_bound("jhg456"), m.end());

        PRINT_LINE("Find:", m.find("hello") != m.end() ? *m.find("hello") : "End");

        PRINT_LINE("Find:", m.find("hello") != m.end() ? *m.find("hello") : "End");
    }

    {
        NAMESPACE::set<int, std::less<int>, track_allocator<int> > m;

        for (int i = 0; i < 15000; ++i) {
            m.insert(rand());
        }

        PRINT_ALL(m);

        m.erase(m.begin(), m.end());

        PRINT_ALL(m);
    }
}

MAIN(set_test_random)
