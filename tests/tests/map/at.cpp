/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:29:11 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 22:32:43 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"
#include <stdexcept>

void map_test_at()
{
    SETUP_ARRAYS();

    {
        intmap m;

        try {
            std::string& x = m.at(6);

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 6);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);

        m.insert(NAMESPACE::make_pair(64, "64"));

        try {
            std::string& x = m.at(64);

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", 64);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        strmap m(strstr_arr, strstr_arr + strstr_size);

        m.insert(NAMESPACE::make_pair("Hello", "World"));

        try {
            std::string& x = m.at("Hello");

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", "Hello");
        }
        CATCH_UNHANDLED_EX();
    }

    {
        strmap m(strstr_arr, strstr_arr + 1);

        try {
            std::string& x = m.at("");

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", "");
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const intmap m;

        try {
            const std::string& x = m.at(6);

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", 6);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        intmap temp(intstr_arr, intstr_arr + intstr_size);

        temp.insert(NAMESPACE::make_pair(64, "64"));

        const intmap m(temp);

        try {
            const std::string& x = m.at(64);

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", 64);
        }
        CATCH_UNHANDLED_EX();
    }

    {
        strmap temp(strstr_arr, strstr_arr + strstr_size);

        temp.insert(NAMESPACE::make_pair("Hello", "World"));

        const strmap m(temp);

        try {
            const std::string& x = m.at("Hello");

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Wrong out of range exception", "Hello");
        }
        CATCH_UNHANDLED_EX();
    }

    {
        const strmap m(strstr_arr, strstr_arr + 1);

        try {
            const std::string& x = m.at("");

            PRINT_LINE("At:", x);
        } catch (std::out_of_range& e) {
            PRINT_LINE("Out of range exception", "");
        }
        CATCH_UNHANDLED_EX();
    }
}

MAIN(map_test_at)
