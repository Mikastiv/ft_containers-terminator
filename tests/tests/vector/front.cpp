/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:47:14 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:51:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_front()
{
    SETUP_ARRAYS();

    {
        longvector v(1, 9);

        PRINT_LINE("Front:", v.front());

        if (&v.front() != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        longvector v(123, 543);

        PRINT_LINE("Front:", v.front());

        if (&v.front() != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const longvector v(1, 9);

        PRINT_LINE("Front:", v.front());

        longvector::const_reference b = v.front();
        if (&b != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const longvector v(123, 543);

        PRINT_LINE("Front:", v.front());

        longvector::const_reference b = v.front();
        if (&b != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }
}

MAIN(vec_test_front)
