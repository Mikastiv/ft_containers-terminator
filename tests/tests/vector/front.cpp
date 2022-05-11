/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:47:14 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 22:30:40 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_front()
{
    SETUP_ARRAYS();

    {
        LONGVECTOR v(1, 9);

        PRINT_LINE("Front:", v.front());

        if (&v.front() != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        LONGVECTOR v(123, 543);

        PRINT_LINE("Front:", v.front());

        if (&v.front() != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const LONGVECTOR v(1, 9);

        PRINT_LINE("Front:", v.front());

        LONGVECTOR::const_reference b = v.front();
        if (&b != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }

    {
        const LONGVECTOR v(123, 543);

        PRINT_LINE("Front:", v.front());

        LONGVECTOR::const_reference b = v.front();
        if (&b != &v[0]) {
            PRINT_MSG("Wrong reference");
        }
    }
}

MAIN(vec_test_front)
