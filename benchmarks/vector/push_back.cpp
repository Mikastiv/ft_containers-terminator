/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:51:57 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 13:54:39 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    SETUP;

    timer t;
    for (int i = 0; i < 3; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < MAXSIZE; ++i) {
            v.push_back(rand());
        }

        BLOCK_OPTIMIZATION(v);
    }

    PRINT_TIME(t);
}
