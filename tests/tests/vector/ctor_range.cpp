/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_range.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:36:53 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 16:40:22 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_ctor_range()
{
    SETUP_ARRAYS();

    {
        DOUBLEVECTOR v(s_double, s_double + s_size);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        STRVECTOR v1(s_string, s_string + s_size);

        CHECK_AND_PRINT_ALL(v1);

        STRVECTOR v2(v1.begin(), v1.end());

        CHECK_AND_PRINT_ALL(v2);

        if (&v1[0] == &v2[0]) {
            PRINT_MSG("Copy ctor doesn't do a deep copy!");
        }
    }

    {
        std::string str = "Hello World!";
        CHARVECTOR v(str.begin(), str.end());

        CHECK_AND_PRINT_ALL(v);
    }

    {
        std::istringstream str("");
        std::istreambuf_iterator<char> it(str), end;

        CHARVECTOR v(it, end);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        std::istringstream str("1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        std::istreambuf_iterator<char> it(str), end;

        CHARVECTOR v(it, end);

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_ctor_range)