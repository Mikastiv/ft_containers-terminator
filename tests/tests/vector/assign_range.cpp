/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:56:15 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:51:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_assign_range()
{
    SETUP_ARRAYS();

    {
        strvector v;

        CHECK_AND_PRINT_ALL(v);

        v.assign(b_string, b_string + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.assign(s_string, s_string + s_size);

        CHECK_AND_PRINT_ALL(v);

        v.assign(s_string, s_string);

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }

    {
        longvector v;

        CHECK_AND_PRINT_ALL(v);

        v.assign(b_long, b_long + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.assign(s_long, s_long + s_size);

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }

    {
        intvector v(s_int, s_int + s_size);

        CHECK_AND_PRINT_ALL(v);

        v.push_back(64);
        v.assign(b_int, b_int + b_size);

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }

    {
        charvector v;

        std::istringstream str("1 2 3 4 5 6 7");
        std::istreambuf_iterator<char> it(str), end;

        CHECK_AND_PRINT_ALL(v);

        v.assign(it, end);

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }
}

MAIN(vec_test_assign_range)
