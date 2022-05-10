/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:32:59 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 14:07:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"
#include <stdexcept>

void vec_test_at()
{
    SETUP_ARRAYS();

    {
        CHARVECTOR v(64, 'a');

        try {
            CHARVECTOR::reference c = v.at(38);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Wrong out of range exception " << 38;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }

    {
        INTVECTOR v(99, 64);

        try {
            INTVECTOR::reference c = v.at(99);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Uut of range exception " << 99;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }

    {
        LONGVECTOR v;

        try {
            LONGVECTOR::reference c = v.at(0);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Uut of range exception " << 0;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const CHARVECTOR v(64, 'a');

        try {
            CHARVECTOR::const_reference c = v.at(38);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Wrong out of range exception " << 38;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const INTVECTOR v(99, 64);

        try {
            INTVECTOR::const_reference c = v.at(99);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Uut of range exception " << 99;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const LONGVECTOR v;

        try {
            LONGVECTOR::const_reference c = v.at(0);

            PRINT_LINE("At:", c);
        } catch (std::out_of_range& e) {
            std::cout << "Uut of range exception " << 0;
            PRINT_FILE_LINE();
        }
        CATCH_UNHANDLED_EX();
    }
}

MAIN(vec_test_at)
