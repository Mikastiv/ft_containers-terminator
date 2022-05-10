/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_le.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:32:56 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 15:53:27 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "vector_prelude.hpp"

void vec_test_comparisons_le()
{
    {
        LONGVECTOR v1;
        LONGVECTOR v2;

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2;

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal.");
        }
    }

    {
        LONGVECTOR v1;
        LONGVECTOR v2(5);

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal..");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(5);

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal...");
        }
    }

    {
        LONGVECTOR v1(5);
        LONGVECTOR v2(4);

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal....");
        }
    }

    {
        LONGVECTOR v1(4);
        LONGVECTOR v2(5);

        if (v1 <= v2) {
            PRINT_MSG("Less than or equal.....");
        }
    }
}

MAIN(vec_test_comparisons_le)
