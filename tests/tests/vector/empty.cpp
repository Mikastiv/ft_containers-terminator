/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:39:35 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:50:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_empty()
{
    SETUP_ARRAYS();

    {
        intvector v(0, 123);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty");
        }
    }

    {
        intvector v;

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty.");
        }
    }

    {
        intvector v(1, 64);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty..");
        }
    }

    {
        intvector v(42, 64);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty...");
        }
    }
}

MAIN(vec_test_empty)
