/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:33:47 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:51:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_back()
{
    SETUP_ARRAYS();

    {
        longvector v(1, 9);

        PRINT_LINE("Back:", v.back());

        if (&v.back() != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        longvector v(123, 543);

        PRINT_LINE("Back:", v.back());

        if (&v.back() != &v[122]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const longvector v(1, 9);

        PRINT_LINE("Back:", v.back());

        longvector::const_reference b = v.back();
        if (&b != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const longvector v(123, 543);

        PRINT_LINE("Back:", v.back());

        longvector::const_reference b = v.back();
        if (&b != &v[122]) {
            PRINT_MSG("Wrong reference");
        }
    }
}

MAIN(vec_test_back)
