/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_mixed.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:51:54 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_insert_mixed()
{
    SETUP_ARRAYS();

    {
        intvector v;

        v.insert(v.end(), s_int, s_int + s_size - 10);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin() + 5, 9, -1);

        CHECK_AND_PRINT_ALL(v);

        intvector::iterator it = v.insert(v.begin(), 64);

        PRINT_LINE("It:", *it);
        CHECK_AND_PRINT_ALL(v);

        for (int i = 0; i < 23; ++i) {
            it = v.insert(v.begin() + i + 2, i);
            PRINT_LINE("It:", *it);
            CHECK_AND_PRINT_ALL(v);
        }

        v.insert(v.end(), 12, 42);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin() + 12, b_int, b_int + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin(), 69);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        strvector v;

        v.insert(v.end(), s_string, s_string + s_size);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.end() - 10, b_string, b_string + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin(), "Hello");

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin() + 1, "World");

        CHECK_AND_PRINT_ALL(v);

        v.insert(v.begin() + 2, 9, "!");

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_insert_mixed)
