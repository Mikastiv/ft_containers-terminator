/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 02:46:39 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:54:53 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"
#include <functional>

void set_test_compare()
{
    SETUP_ARRAYS();

    {
        NAMESPACE::set<int, std::greater<int>, track_allocator<int> > s(int_arr,
                                                                        int_arr + int_size);

        PRINT_ALL(s);
    }
}

MAIN(set_test_compare)
