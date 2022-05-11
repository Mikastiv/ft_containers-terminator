/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_size.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:38:17 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 22:46:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_ctor_size()
{
    SETUP_ARRAYS();

    {
        INTVECTOR v(64, 1);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        INTVECTOR v(0, -1);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        STRVECTOR v(26, b_string[0]);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        STRVECTOR v(0, b_string[32]);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        try {
            const std::size_t max_size = NAMESPACE::vector<big_struct>().max_size();
            NAMESPACE::vector<big_struct> v(max_size + 1);

            PRINT_MSG("Allocation shouldve failed");
        } catch (std::length_error& e) {
            PRINT_MSG("Length exception");
        }
        CATCH_UNHANDLED_EX();
    }
}

MAIN(vec_test_ctor_size)
