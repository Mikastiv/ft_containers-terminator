/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:42:14 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_erase_range()
{
    SETUP_ARRAYS();

    {
        longvector v;

        v.erase(v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);
    }

    {
        longvector v(b_int, b_int + b_size);

        v.erase(v.end(), v.end());

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin() + 5, v.begin() + 5);

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin() + 26, v.end() - 1);

        CHECK_AND_PRINT_ALL(v);
    }

    {
        intvector v(37, -5);

        v.erase(v.begin() + 1, v.begin() + 2);

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_erase_range)
