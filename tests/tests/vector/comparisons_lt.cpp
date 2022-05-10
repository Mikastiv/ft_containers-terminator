/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_lt.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:30:23 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 15:53:30 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_comparisons_lt()
{
    {
        LONGVECTOR v1;
        LONGVECTOR v2;

        if (v1 < v2) {
            PRINT_MSG("Less than");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2;

        if (v1 < v2) {
            PRINT_MSG("Less than.");
        }
    }

    {
        LONGVECTOR v1;
        LONGVECTOR v2(5);

        if (v1 < v2) {
            PRINT_MSG("Less than..");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(5);

        if (v1 < v2) {
            PRINT_MSG("Less than...");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(4);

        if (v1 < v2) {
            PRINT_MSG("Less than....");
        }
    }

    {
        LONGVECTOR v1(4);
        LONGVECTOR v2(5);

        if (v1 < v2) {
            PRINT_MSG("Less than.....");
        }
    }
}

MAIN(vec_test_comparisons_lt)
