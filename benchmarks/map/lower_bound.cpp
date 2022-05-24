/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_bound.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:19:08 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:19:24 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::map<int, int> data;

    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        data.insert(NAMESPACE::make_pair(rand(), rand()));
    }

    timer t;

    for (int i = 0; i < 10000000; ++i) {
        NAMESPACE::map<int, int>::iterator it = data.lower_bound(rand());
        if (it != data.end()) {
            it->second = 64;
        }
    }

    PRINT_TIME(t);
}
