/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:50:53 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:24:11 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::set<int> data;

    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        data.insert(rand());
    }

    timer t;

    {
        NAMESPACE::set<int> s;
        for (int i = 0; i < 5; ++i) {
            s = data;
        }
    }

    PRINT_TIME(t);
}
