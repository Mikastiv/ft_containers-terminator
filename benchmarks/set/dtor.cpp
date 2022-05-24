/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dtor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:57:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:25:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<int> data;

    for (std::size_t i = 0; i < MAXSIZE; ++i) {
        data.push_back(rand());
    }

    timer t;

    for (int i = 0; i < 5; ++i) {
        sum += t.get_time();
        NAMESPACE::set<int> s(data.begin(), data.begin() + 2500000);
        t.reset();
    }

    PRINT_SUM();
}
