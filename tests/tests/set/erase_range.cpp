/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:26:57 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

void set_test_erase_range()
{
    SETUP_ARRAYS();

    {
        strset m;

        m.erase(m.begin(), m.end());

        PRINT_ALL(m);

        m.insert(str_arr, str_arr + str_size);

        m.erase(m.begin(), m.end());

        PRINT_ALL(m);
    }

    {
        intset m(int_arr, int_arr + int_size);

        intset::iterator it(m.begin());
        intset::iterator end(it);

        std::advance(end, 1);

        m.erase(it, end);

        PRINT_ALL(m);

        it = m.begin();
        end = it;
        std::advance(it, 24);
        std::advance(end, 30);

        m.erase(it, end);

        PRINT_ALL(m);

        it = m.begin();
        end = it;
        std::advance(it, 34);
        std::advance(end, 55);

        m.erase(it, end);

        PRINT_ALL(m);

        it = m.begin();
        end = it;
        std::advance(end, 1);

        m.erase(it, end);

        PRINT_ALL(m);

        m.erase(m.begin(), m.end());

        PRINT_ALL(m);
    }
}

MAIN(set_test_erase_range)
