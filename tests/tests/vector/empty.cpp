/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:39:35 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 16:58:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_empty()
{
    SETUP_ARRAYS();

    {
        INTVECTOR v(0, 123);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty");
        }
    }

    {
        INTVECTOR v;

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty.");
        }
    }

    {
        INTVECTOR v(1, 64);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty..");
        }
    }

    {
        INTVECTOR v(42, 64);

        CHECK_AND_PRINT_ALL(v);

        if (v.empty()) {
            PRINT_MSG("Empty...");
        }
    }
}

MAIN(vec_test_empty)
