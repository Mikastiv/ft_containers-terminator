/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_comparisons.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:08:45 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/12 21:10:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_iterator_comparisons()
{
    SETUP_ARRAYS();

    {
        INTVECTOR v(b_int, b_int + b_size);

        INTVECTOR::iterator it = v.begin();
        INTVECTOR::iterator it2 = v.begin();
        INTVECTOR::const_iterator cit = v.begin();
        INTVECTOR::const_iterator cit2 = v.begin();

        if (it == v.begin()) {
            PRINT_MSG("Equal iterators")
        }
        if (cit == v.begin()) {
            PRINT_MSG("Equal const iterators")
        }
        if (cit == it) {
            PRINT_MSG("Equal const iterators.")
        }

        ++it;
        cit += 6;

        if (it != v.end()) {
            PRINT_MSG("Not Equal iterators")
        }
        if (cit != v.end()) {
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

MAIN(vec_test_iterator_comparisons)
