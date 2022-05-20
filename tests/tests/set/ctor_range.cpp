/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_range.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:04:07 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 23:04:29 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_ctor_range()
{
    SETUP_ARRAYS();

    {
        track_allocator<NAMESPACE::pair<const int, std::string> > alloc;
        intset m(intstr_arr, intstr_arr + intstr_size, std::less<int>(), alloc);

        PRINT_ALL(m);

        intset m2(m.begin(), m.end());

        PRINT_ALL(m);
        PRINT_ALL(m2);
    }

    {
        strset m1(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m1);

        strset m2(strstr_arr, strstr_arr + strstr_size);

        PRINT_ALL(m1);
        PRINT_ALL(m2);
    }
}

MAIN(set_test_ctor_range)
