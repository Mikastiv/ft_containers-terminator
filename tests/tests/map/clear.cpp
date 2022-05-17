/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:36:08 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 16:37:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_clear()
{
    SETUP_ARRAYS();

    {
        strmap m;

        PRINT_ALL(m);

        m.clear();

        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + 16);

        PRINT_ALL(m);

        m.clear();

        PRINT_ALL(m);
    }
}

MAIN(map_test_clear)
