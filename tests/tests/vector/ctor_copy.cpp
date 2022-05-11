/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:35:45 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/11 16:15:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_ctor_copy()
{
    SETUP_ARRAYS();

    {
        DOUBLEVECTOR v1(b_double, b_double + b_size);

        CHECK_AND_PRINT_ALL(v1);

        DOUBLEVECTOR v2(v1);

        CHECK_AND_PRINT_ALL(v2);

        if (&v1[0] == &v2[0]) {
            PRINT_MSG("Copy ctor doesn't do a deep copy!");
        }

        leak_checker::check_alive_objects();
    }

    {
        STRVECTOR v1(b_string, b_string + b_size);

        CHECK_AND_PRINT_ALL(v1);

        STRVECTOR v2(v1);

        CHECK_AND_PRINT_ALL(v2);

        if (&v1[0] == &v2[0]) {
            PRINT_MSG("Copy ctor doesn't do a deep copy!");
        }

        leak_checker::check_alive_objects();
    }
}

MAIN(vec_test_ctor_copy)
