/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:06:29 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 19:43:02 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<NAMESPACE::pair<int, int> > data;

    for (std::size_t i = 0; i < MAXSIZE / 4; ++i) {
        data.push_back(NAMESPACE::make_pair(rand(), rand()));
    }

    NAMESPACE::map<int, int> m;

    timer t;

    for (std::size_t i = 0; i < 2; ++i) {
        m.insert(data.begin(), data.end());
    }
    sum += t.get_time();

    NAMESPACE::map<int, int> m2;
    for (std::size_t i = 0; i < 5; ++i) {
        t.reset();
        m2.insert(m.begin(), m.end());
        sum += t.get_time();
        m2.clear();
    }

    PRINT_SUM();
}
