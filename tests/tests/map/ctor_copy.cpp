/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:02:42 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:11:36 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

void map_test_ctor_copy()
{
    SETUP_ARRAYS();

    {
        intmap m1(intstr_arr, intstr_arr + intstr_size);

        PRINT_ALL(m1);

        intmap m2(m1);

        PRINT_ALL(m2);
    }

    {
        strmap m1(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m1);

        strmap m2(m1);

        PRINT_ALL(m2);
    }
}

MAIN(map_test_ctor_copy)
