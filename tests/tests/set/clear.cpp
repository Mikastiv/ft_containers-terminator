/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:20:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:20:27 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_clear()
{
    SETUP_ARRAYS();

    {
        strset m;

        PRINT_ALL(m);

        m.clear();

        PRINT_ALL(m);

        m.insert(strstr_arr, strstr_arr + 16);

        PRINT_ALL(m);

        m.clear();

        PRINT_ALL(m);
    }
}

MAIN(set_test_clear)
