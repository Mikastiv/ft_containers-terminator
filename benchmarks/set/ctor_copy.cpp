/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_copy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:38:01 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:25:03 by mleblanc         ###   ########.fr       */
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

    for (int i = 0; i < 5; ++i) {
        NAMESPACE::set<int> s(data);
    }

    PRINT_TIME(t);
}
