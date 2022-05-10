/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:32:09 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 14:01:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_assignment()
{
    SETUP_ARRAYS();

    {
        STRVECTOR v1;
        STRVECTOR v2;

        v1 = v2;

        CHECK_AND_PRINT_ALL(v1);

        v2 = STRVECTOR(b_string, b_string + b_size);

        CHECK_AND_PRINT_ALL(v2);

        v1 = v2;

        CHECK_AND_PRINT_ALL(v1);

        v2 = STRVECTOR(s_string, s_string + s_size);

        CHECK_AND_PRINT_ALL(v2);

        v1 = v2;

        CHECK_AND_PRINT_ALL(v1);
    }
}

MAIN(vec_test_assignment)
