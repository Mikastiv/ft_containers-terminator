/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:50:53 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 19:47:17 by mleblanc         ###   ########.fr       */
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

    {
        NAMESPACE::map<int, int> m;
        for (int i = 0; i < 5; ++i) {
            m = data;
        }
    }

    PRINT_TIME(t);
}
