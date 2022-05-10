/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:34:26 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 15:53:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_clear()
{
    {
        INTVECTOR v;

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        INTVECTOR v(1, 64);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        INTVECTOR v(64, 420);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_clear)
