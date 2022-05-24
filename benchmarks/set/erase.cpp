/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:31:42 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:28:13 by mleblanc         ###   ########.fr       */
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

    NAMESPACE::set<int> s(data);

    timer t;
    for (int i = 0; i < 300000; ++i) {
        s.erase(s.begin());
    }

    for (int i = 0; i < 1000000; ++i) {
        NAMESPACE::set<int>::iterator it = s.begin();
        std::advance(it, i % 2 == 0 ? 2400 : 3064);
        s.erase(it);
    }

    for (int i = 0; i < 100000; ++i) {
        NAMESPACE::set<int>::iterator it = s.end();
        std::advance(it, i % 2 == 0 ? -1 : -364);
        s.erase(it);
    }

    PRINT_TIME(t);
}
