/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:58:21 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/18 14:30:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"
#include <algorithm>

void vec_test_swap()
{
    SETUP_ARRAYS();

    {
        strvector v1(s_string, s_string + s_size);
        strvector v2(b_string, b_string + b_size);

        v1.swap(v2);

        CHECK_AND_PRINT_ALL(v1);
        CHECK_AND_PRINT_ALL(v2);

        NAMESPACE::swap(v1, v2);

        CHECK_AND_PRINT_ALL(v1);
        CHECK_AND_PRINT_ALL(v2);

        v1.resize(0);

        v1.swap(v2);

        CHECK_AND_PRINT_ALL(v1);
        CHECK_AND_PRINT_ALL(v2);

        v1.resize(0);

        NAMESPACE::swap(v1, v2);

        CHECK_AND_PRINT_ALL(v1);
        CHECK_AND_PRINT_ALL(v2);
    }
}

MAIN(vec_test_swap)
