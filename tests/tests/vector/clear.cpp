/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:34:26 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:50:38 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_clear()
{
    {
        intvector v;

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        intvector v(1, 64);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }

    {
        intvector v(64, 420);

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);

        v.clear();

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_clear)
