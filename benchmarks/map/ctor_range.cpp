/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_range.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:16:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 19:31:54 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<NAMESPACE::pair<int, int> > data;

    for (std::size_t i = 0; i < MAXSIZE; ++i) {
        data.push_back(NAMESPACE::make_pair(rand(), rand()));
    }

    timer t;

    for (int i = 0; i < 5; ++i) {
        NAMESPACE::map<int, int> m(data.begin(), data.begin() + 2500000);
    }

    PRINT_TIME(t);
}
