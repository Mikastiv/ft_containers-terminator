/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:52:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/12 21:34:15 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_iterator()
{
    SETUP_ARRAYS();

    {
        INTVECTOR v1;
        const INTVECTOR v2;

        if (v1.begin() != v1.end()) {
            PRINT_MSG("Iterator error");
        }

        INTVECTOR::const_iterator it = v2.begin();
        if (it != v2.end()) {
            PRINT_MSG("Iterator error");
        }

        if (v1.rbegin() != v1.rend()) {
            PRINT_MSG("Iterator error");
        }

        INTVECTOR::const_reverse_iterator rit = v2.rbegin();
        if (rit != v2.rend()) {
            PRINT_MSG("Iterator error");
        }
    }

    {
        INTVECTOR v(b_int, b_int + b_size);

        INTVECTOR::iterator it1 = v.begin();
        INTVECTOR::iterator it2 = it1;

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
        STRVECTOR v(b_string, b_string + b_size);

        STRVECTOR::iterator it = v.begin();
        STRVECTOR::const_iterator cit = v.begin() + 34;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        it->clear();
        PRINT_LINE("Cstr:", cit->c_str());

        CHECK_AND_PRINT_ALL(v);

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
    }
}

MAIN(vec_test_iterator)
