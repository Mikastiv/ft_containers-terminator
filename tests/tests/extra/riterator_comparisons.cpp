/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riterator_comparisons.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:38:06 by mleblanc          #+#    #+#             */
/*   Updated: 2022/11/16 17:43:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_prelude.hpp"
#include <vector>

#define riter NAMESPACE::reverse_iterator<std::vector<int>::iterator>
#define criter NAMESPACE::reverse_iterator<std::vector<const int>::iterator>

void test_riterator_comparisons()
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

        riter it(v.end());
        riter it2(v.end());
        criter cit(v.end());
        criter cit2(v.end());

        if (it == it2) {
            PRINT_MSG("Equal iterators")
        }
        if (cit == cit2) {
            PRINT_MSG("Equal const iterators")
        }
        if (cit == it) {
            PRINT_MSG("Equal const iterators.")
        }

        ++it;
        cit += 6;

        if (it != riter(v.begin())) {
            PRINT_MSG("Not Equal iterators")
        }
        if (cit != riter(v.begin())) {
            PRINT_MSG("Not Equal const iterators")
        }
        if (cit != it) {
            PRINT_MSG("Not Equal const iterators.")
        }

        if (it < it + 1) {
            PRINT_MSG("Less than")
        }
        if (it + 1 < it) {
            PRINT_MSG("Less than.")
        }
        if (it < it) {
            PRINT_MSG("Less than..")
        }
        if (cit < cit + 1) {
            PRINT_MSG("Less than...")
        }
        if (cit + 1 < cit) {
            PRINT_MSG("Less than....")
        }
        if (cit < cit) {
            PRINT_MSG("Less than....")
        }
        if (it2 < cit2 + 1) {
            PRINT_MSG("Less than.....")
        }
        if (it2 < cit2) {
            PRINT_MSG("Less than......")
        }

        if (it <= it + 1) {
            PRINT_MSG("Less than or equal")
        }
        if (it + 1 <= it) {
            PRINT_MSG("Less than or equal.")
        }
        if (it <= it) {
            PRINT_MSG("Less than or equal..")
        }
        if (cit <= cit + 1) {
            PRINT_MSG("Less than or equal...")
        }
        if (cit + 1 <= cit) {
            PRINT_MSG("Less than or equal....")
        }
        if (cit <= cit) {
            PRINT_MSG("Less than or equal.....")
        }
        if (it2 <= cit2 + 1) {
            PRINT_MSG("Less than or equal......")
        }
        if (it2 <= cit2) {
            PRINT_MSG("Less than or equal.......")
        }

        if (it > it + 1) {
            PRINT_MSG("Greater than")
        }
        if (it + 1 > it) {
            PRINT_MSG("Greater than.")
        }
        if (it > it) {
            PRINT_MSG("Greater than..")
        }
        if (cit > cit + 1) {
            PRINT_MSG("Greater than...")
        }
        if (cit + 1 > cit) {
            PRINT_MSG("Greater than....")
        }
        if (cit > cit) {
            PRINT_MSG("Greater than....")
        }
        if (it2 + 1 > cit2) {
            PRINT_MSG("Greater than.....")
        }
        if (it2 > cit2) {
            PRINT_MSG("Greater than......")
        }

        if (it >= it + 1) {
            PRINT_MSG("Greater than or equal")
        }
        if (it + 1 >= it) {
            PRINT_MSG("Greater than or equal.")
        }
        if (it >= it) {
            PRINT_MSG("Greater than or equal..")
        }
        if (cit >= cit + 1) {
            PRINT_MSG("Greater than or equal...")
        }
        if (cit + 1 >= cit) {
            PRINT_MSG("Greater than or equal....")
        }
        if (cit >= cit) {
            PRINT_MSG("Greater than or equal.....")
        }
        if (it2 >= cit2 + 1) {
            PRINT_MSG("Greater than or equal......")
        }
        if (it2 + 1 >= cit2) {
            PRINT_MSG("Greater than or equal.......")
        }
        if (it2 >= cit2) {
            PRINT_MSG("Greater than or equal........")
        }
    }
}

MAIN(test_riterator_comparisons)
