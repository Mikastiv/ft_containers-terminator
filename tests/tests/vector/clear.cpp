/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:34:26 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 14:39:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_clear()
{
    SETUP_ARRAYS();

    {
        INTVECTOR v;

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        INTVECTOR v(b_int, b_int + 1);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        INTVECTOR v(b_int, b_int + b_size);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_clear)
