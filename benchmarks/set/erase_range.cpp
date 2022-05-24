/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:05:55 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:27:28 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"
#include <iterator>

int main()
{
    SETUP;

    NAMESPACE::set<int> data;

    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        data.insert(rand());
    }

    timer t;

    for (int i = 0; i < 10; ++i) {
        NAMESPACE::set<int> s(data);

        t.reset();
        for (int i = 0; i < 100; ++i) {
            NAMESPACE::set<int>::iterator it = s.begin();
            std::advance(it, i % 2 == 0 ? 2400 : 3064);
            s.erase(s.begin(), it);
        }

        s.erase(s.begin(), s.end());

        sum += t.get_time();
    }

    PRINT_SUM();
}
