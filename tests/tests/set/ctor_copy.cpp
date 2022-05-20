/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:00:17 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:02:08 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_ctor_copy()
{
    SETUP_ARRAYS();

    {
        intset m1(intstr_arr, intstr_arr + intstr_size);

        PRINT_ALL(m1);

        intset m2(m1);

        PRINT_ALL(m2);
    }

    {
        strset m1(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m1);

        strset m2(m1);

        PRINT_ALL(m2);
    }
}

MAIN(set_test_ctor_copy)
