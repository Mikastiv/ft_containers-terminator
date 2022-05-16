/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reserve.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:57:21 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_reserve()
{
    SETUP_ARRAYS();

    {
        intvector v;

        v.reserve(64);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(64);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(0);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(45);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(65);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(79);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        intvector v(s_int, s_int + s_size);

        v.reserve(0);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(32);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(48);

        CHECK_AND_PRINT_ALL(v);

        v.reserve(1);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        NAMESPACE::vector<big_struct, track_allocator<big_struct> > v;

        try {
            v.reserve(v.max_size() + 1);
            PRINT_MSG("Bad reserve");
        } catch (std::length_error&) {
            PRINT_MSG("Length exception");
        }
        CATCH_UNHANDLED_EX();
    }
}

MAIN(vec_test_reserve)
