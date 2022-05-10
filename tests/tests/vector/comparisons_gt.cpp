/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_gt.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:33:57 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 15:53:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_comparisons_gt()
{
    {
        LONGVECTOR v1;
        LONGVECTOR v2;

        if (v1 > v2) {
            PRINT_MSG("Greater than");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2;

        if (v1 > v2) {
            PRINT_MSG("Greater than.");
        }
    }

    {
        LONGVECTOR v1;
        LONGVECTOR v2(5);

        if (v1 > v2) {
            PRINT_MSG("Greater than..");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(5);

        if (v1 > v2) {
            PRINT_MSG("Greater than...");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(4);

        if (v1 > v2) {
            PRINT_MSG("Greater than....");
        }
    }

    {
        LONGVECTOR v1(4);
        LONGVECTOR v2(5);

        if (v1 > v2) {
            PRINT_MSG("Greater than.....");
        }
    }
}

MAIN(vec_test_comparisons_gt)
