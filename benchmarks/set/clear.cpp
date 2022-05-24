/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:06:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:24:41 by mleblanc         ###   ########.fr       */
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
        NAMESPACE::set<int> s(data.begin(), data.begin() + 2500000);
        t.reset();
        s.clear();
        sum += t.get_time();
    }

    PRINT_SUM();
}
