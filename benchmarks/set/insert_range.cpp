/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:06:29 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:30:18 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<int> data;

    for (std::size_t i = 0; i < MAXSIZE / 4; ++i) {
        data.push_back(rand());
    }

    NAMESPACE::set<int> s;

    timer t;

    for (std::size_t i = 0; i < 2; ++i) {
        s.insert(data.begin(), data.end());
    }
    sum += t.get_time();

    NAMESPACE::set<int> s2;
    for (std::size_t i = 0; i < 5; ++i) {
        t.reset();
        s2.insert(s.begin(), s.end());
        sum += t.get_time();
        s2.clear();
    }

    PRINT_SUM();
}
