/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riterator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:45:42 by mleblanc          #+#    #+#             */
/*   Updated: 2022/11/16 17:37:44 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_prelude.hpp"
#include <vector>

#define riter NAMESPACE::reverse_iterator<std::vector<int>::iterator>
#define criter NAMESPACE::reverse_iterator<std::vector<const int>::iterator>

void test_riterator()
{
    int numbers[] = { 7376, 1639, 4837, 241,  6236, 2272, 9589, 2455, 8493, 9864, 2583, 9100, 8067,
                      966,  3793, 1878, 6105, 6767, 1255, 354,  2230, 7649, 1210, 3356, 922,  7103,
                      7630, 105,  8882, 1053, 4127, 1229, 7537, 3287, 6615, 6033, 5205, 1739, 8407,
                      1735, 4690, 6210, 189,  4241, 6502, 3177, 1382, 3180, 1555, 6484, 6777, 3388,
                      8296, 6574, 6626, 9402, 8549, 7447, 8019, 5684, 7024, 4251, 1524, 9536, 572,
                      8182, 1530, 8073, 4898, 3872, 6271, 7638, 4398, 5621, 9805, 1985, 4974, 7497,
                      4798, 9902, 8060, 9260, 7033, 7078, 6717, 1208, 9896, 2472, 5584, 4159, 5859,
                      9023, 4260, 9935, 6088, 5884, 581,  246,  5617, 9446 };

    {
        std::vector<int> v(numbers, numbers + sizeof(numbers) / sizeof(int));

        riter it1(v.end());
        riter it2 = it1;

        PRINT_LINE("It1:", *it1);
        PRINT_LINE("It2:", *it2);

        it1 = riter(v.end()) + 9;

        PRINT_LINE("It1:", *it1);

        it1 = riter(v.begin()) - 1;

        PRINT_LINE("It1:", *it1);

        it2 = it1;

        PRINT_LINE("It2:", *it2);

        *it1 = -1;

        PRINT_VEC(v);
    }

    {
        std::vector<int> v(numbers, numbers + sizeof(numbers) / sizeof(int));

        riter it(v.end());
        criter cit = criter(v.end()) + 34;

        PRINT_LINE("It:", *it);
        PRINT_LINE("Cit:", *cit);

        std::vector<const int>::iterator tmp = cit.base();
        (void)tmp;

        PRINT_VEC(v);

        ++it;
        ++it;
        ++it;
        ++it;
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
        PRINT_LINE("It:", *(v.rend() - 6));
        PRINT_LINE("Cit:", *(cit - 6));
        PRINT_LINE("Cit:", *(cit + 7));
        PRINT_LINE("Size:", v.rend() - v.rbegin());

        it = riter(v.end()) + 25;
        cit = criter(v.end()) + 25;

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
        std::vector<int> v(numbers, numbers + sizeof(numbers) / sizeof(int));

        int (*fn)(const int&) = &times2;

        std::transform(riter(v.end()), riter(v.begin()) - 10, riter(v.end()), fn);

        PRINT_VEC(v);

        std::reverse(riter(v.end()), riter(v.begin()));

        PRINT_VEC(v);
    }

    {
        std::vector<std::string> sv(64, "hello");

        NAMESPACE::reverse_iterator<std::vector<std::string>::iterator> it(sv.end());

        it->clear();
        ++it;
        it->clear();
        it += 12;
        it->clear();

        PRINT_VEC(sv);
    }
}

MAIN(test_riterator)
