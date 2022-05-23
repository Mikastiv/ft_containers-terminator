/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:02:02 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 15:04:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

int main()
{
    SETUP;

    timer t;

    NAMESPACE::map<int, int> m;
    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        m[rand()] = rand();
    }

    PRINT_TIME(t);
}
