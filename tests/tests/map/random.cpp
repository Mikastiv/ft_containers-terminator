/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:45:46 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 14:50:08 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"
#include <limits>

void map_test_random()
{
    SETUP_ARRAYS();

    {
        strmap m(strstr_arr, strstr_arr + 16);

        strmap::iterator it = m.find("Hello");

        if (it != m.end()) {
            PRINT_PAIR_REF(*it);
        }

        try {
            std::string& ref = m.at("World!");

            PRINT_LINE("Val:", ref);
        } catch (std::out_of_range& e) {
            PRINT_MSG("Exception");
        }
        CATCH_UNHANDLED_EX();

        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m);

        m.erase(m.begin());

        PRINT_ALL(m);

        it = m.begin();
        std::advance(it, 10);

        m.erase(it, m.end());

        PRINT_ALL(m);

        strmap::size_type s = m.erase("1234");

        PRINT_ALL(m);
        PRINT_LINE("S:", s);

        m.clear();

        PRINT_ALL(m);

        it = m.insert(m.begin(), NAMESPACE::make_pair("", "test"));

        PRINT_LINE("Count:", m.count(""));

        PRINT_PAIR_REF(*it);
        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + strstr_size);

        strmap n(strstr_arr, strstr_arr + 10);

        m.swap(n);

        PRINT_ALL(m);
        PRINT_ALL(n);

        PRINT_EQ_RANGE(m.equal_range("abcd"), m.end());
        PRINT_BOUND(m.lower_bound("123"), m.end());
        PRINT_BOUND(m.upper_bound("jhg456"), m.end());

        PRINT_LINE("Find:", m.find("hello") != m.end() ? m.find("hello")->first : "End");

        m["hello"] = "world";

        PRINT_LINE("Find:", m.find("hello") != m.end() ? m.find("hello")->first : "End");
    }

    {
        NAMESPACE::map<int, int, std::less<int>, track_allocator<NAMESPACE::pair<const int, int> > >
            m;

        for (int i = 0; i < 50000; ++i) {
            m.insert(NAMESPACE::make_pair(rand(), rand()));
        }

        PRINT_ALL(m);

        m.erase(m.begin(), m.end());

        PRINT_ALL(m);
    }
}

MAIN(map_test_random)
