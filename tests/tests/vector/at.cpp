/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:32:59 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 22:06:58 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"
#include <stdexcept>

void vec_test_at()
{
    SETUP_ARRAYS();

    {
        charvector v(64, 'a');

        try {
            charvector::reference c = v.at(38);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", 38);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        intvector v(99, 64);

        try {
            intvector::reference c = v.at(99);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 99);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        longvector v;

        try {
            longvector::reference c = v.at(0);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 0);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const charvector v(64, 'a');

        try {
            charvector::const_reference c = v.at(38);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", 38);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const intvector v(99, 64);

        try {
            intvector::const_reference c = v.at(99);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 99);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const longvector v;

        try {
            longvector::const_reference c = v.at(0);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 0);
        }
        CATCH_UNHANDLED_EX();
    }
}

MAIN(vec_test_at)
