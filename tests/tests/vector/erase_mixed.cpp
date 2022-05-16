/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_mixed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:44:02 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:12:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_erase_mixed()
{
    SETUP_ARRAYS();

    {
        strvector v(b_string, b_string + b_size);

        v.erase(v.begin(), v.begin());

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.end(), v.end());

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin());

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.end() - 1);

        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin() + 3, v.begin() + 16);

        CHECK_AND_PRINT_ALL(v);

        strvector::iterator it = v.erase(v.begin() + 9);

        PRINT_LINE("It:", *it);
        CHECK_AND_PRINT_ALL(v);

        v.erase(v.begin(), v.end());

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_erase_mixed)
