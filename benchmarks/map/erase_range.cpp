/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:05:55 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:11:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"
#include <iterator>

int main()
{
    SETUP;

    NAMESPACE::map<int, int> data;

    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        data.insert(NAMESPACE::make_pair(rand(), rand()));
    }

    timer t;

    for (int i = 0; i < 10; ++i) {
        NAMESPACE::map<int, int> m(data);

        t.reset();
        for (int i = 0; i < 100; ++i) {
            NAMESPACE::map<int, int>::iterator it = m.begin();
            std::advance(it, i % 2 == 0 ? 2400 : 3064);
            m.erase(m.begin(), it);
        }

        m.erase(m.begin(), m.end());

        sum += t.get_time();
    }

    PRINT_SUM();
}
