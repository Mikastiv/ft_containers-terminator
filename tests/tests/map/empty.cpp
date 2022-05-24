/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:57:51 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 16:31:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_empty()
{
    SETUP_ARRAYS();

    {
        strmap m;

        PRINT_LINE("Empty:", m.empty() ? "true" : "false");

        m.insert(NAMESPACE::make_pair("Hello", "World"));

        PRINT_LINE("Empty:", m.empty() ? "true" : "false");

        m.erase(m.begin());

        PRINT_LINE("Empty:", m.empty() ? "true" : "false");
    }

    {
        intmap m(intstr_arr, intstr_arr + intstr_size);

        PRINT_LINE("Empty:", m.empty() ? "true" : "false");
    }
}

MAIN(map_test_empty)
