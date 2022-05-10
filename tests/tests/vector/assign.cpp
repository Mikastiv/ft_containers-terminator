/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:47:35 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 14:03:18 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_assign()
{
    {
        CHARVECTOR v;

        v.assign(0, 1);

        CHECK_AND_PRINT_ALL(v);

        v.assign(64, 10);

        CHECK_AND_PRINT_ALL(v);

        v.assign(32, 64);

        CHECK_AND_PRINT_ALL(v);

        v.assign(49, 5);

        CHECK_AND_PRINT_ALL(v);

        v.assign(77, 99);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        STRVECTOR v;

        v.assign(0, "");

        CHECK_AND_PRINT_ALL(v);

        v.assign(64, "vector-string");

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_assign)
