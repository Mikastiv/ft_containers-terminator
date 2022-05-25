/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:52:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 22:02:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"
#include <algorithm>

void vec_test_iterator()
{
    SETUP_ARRAYS();

    {
        intvector v1;
        const intvector v2;

        if (v1.begin() != v1.end()) {
            PRINT_MSG("Iterator error");
        }

        intvector::const_iterator it = v2.begin();
        if (it != v2.end()) {
            PRINT_MSG("Iterator error");
        }
    }

    {
        intvector v(b_int, b_int + b_size);

        intvector::iterator it1 = v.begin();
        intvector::iterator it2 = it1;

        PRINT_LINE("It1:", *it1);
        PRINT_LINE("It2:", *it2);

        it1 = v.begin() + 9;

        PRINT_LINE("It1:", *it1);

        it1 = v.end() - 1;

        PRINT_LINE("It1:", *it1);

        it2 = it1;

        PRINT_LINE("It2:", *it2);

        *it1 = -1;

        CHECK_AND_PRINT_ALL(v);
    }

    {
        strvector v(b_string, b_string + b_size);

        strvector::iterator it = v.begin();
        strvector::const_iterator cit = v.begin() + 34;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it->clear();
        PRINT_LINE("Cstr:", cit->c_str());

        CHECK_AND_PRINT_ALL(v);

        ++it;
        ++it;
        ++it;
        ++it;
        ++it;
        ++it;
        ++it;
        it++;
        ++cit;
        cit++;

        PRINT_LINE("It:", *it);
        PRINT_LINE("It:", *it++);
        PRINT_LINE("It:", *it);

        PRINT_LINE("Cit:", *cit);
        PRINT_LINE("Cit:", *cit++);
        PRINT_LINE("Cit:", *cit);

        --it;
        it--;
        it--;
        --cit;
        --cit;
        cit--;

        PRINT_LINE("It:", *it);
        PRINT_LINE("It:", *it--);
        PRINT_LINE("It:", *it);

        PRINT_LINE("Cit:", *cit);
        PRINT_LINE("Cit:", *cit--);
        PRINT_LINE("Cit:", *cit);

        PRINT_LINE("It:", *(it + 6));
        PRINT_LINE("It:", *(42 + it));
        PRINT_LINE("It:", *(42 + it - 3));
        PRINT_LINE("It:", *(v.end() - 6));
        PRINT_LINE("Cit:", *(cit - 6));
        PRINT_LINE("Cit:", *(cit + 7));
        PRINT_LINE("Size:", v.end() - v.begin());

        it = v.begin() + 25;
        cit = v.begin() + 25;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it += 12;
        cit += 12;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it += 0;
        cit += 0;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it += 4;
        cit += 4;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it -= 0;
        cit -= 0;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it -= 22;
        cit -= 22;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);
        PRINT_LINE("It + 10:", it[10]);
        PRINT_LINE("Cit + 10:", cit[10]);
    }

    {
        longvector v(b_long, b_long + b_size);

        long (*fn)(const long&) = &times2;

        std::transform(v.begin(), v.end() - 10, v.begin(), fn);

        CHECK_AND_PRINT_ALL(v);

        std::reverse(v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);
    }

    {
        const longvector v(b_long, b_long + b_size);

        void (*fn)(const long&) = &print;

        std::for_each(v.begin(), v.end(), fn);
    }

    {
        intvector v(s_int, s_int + s_size);
        intvector::iterator it = v.begin();
        intvector::const_iterator cit(it);
        (void)cit;
    }
}

MAIN(vec_test_iterator)
