/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:40:46 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 19:41:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<int> data(MAXSIZE);

    iota(data.begin(), data.end(), rand());

    NAMESPACE::map<int, int> m;

    timer t;

    for (std::size_t i = 0; i < 5; ++i) {
        t.reset();
        for (NAMESPACE::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
            m.insert(m.end(), NAMESPACE::make_pair(*it, rand()));
        }
        sum += t.get_time();
        m.clear();
    }

    PRINT_SUM();
}
