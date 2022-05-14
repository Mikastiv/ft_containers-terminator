/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riterator_comparisons.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:30:42 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:50:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_riterator_comparisons()
{
    SETUP_ARRAYS();

    {
        intvector v(b_int, b_int + b_size);

        intvector::reverse_iterator it = v.rbegin();
        intvector::reverse_iterator it2 = v.rbegin();
        intvector::const_reverse_iterator cit = v.rbegin();
        intvector::const_reverse_iterator cit2 = v.rbegin();

        if (it == v.rbegin()) {
            PRINT_MSG("Equal iterators")
        }
        if (cit == v.rbegin()) {
            PRINT_MSG("Equal const iterators")
        }
        if (cit == it) {
            PRINT_MSG("Equal const iterators.")
        }

        ++it;
        cit += 6;

        if (it != v.rend()) {
            PRINT_MSG("Not Equal iterators")
        }
        if (cit != v.rend()) {
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

MAIN(vec_test_riterator_comparisons)
