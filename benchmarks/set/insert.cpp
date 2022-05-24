/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:39:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:30:34 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::set<int> data;

    timer t;

    for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
        data.insert(rand());
    }

    PRINT_TIME(t);
}
