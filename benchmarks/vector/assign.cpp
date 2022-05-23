/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:34:38 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 13:37:20 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    SETUP;

    timer t;

    for (int i = 0; i < 10; ++i) {
        NAMESPACE::vector<int> v;

        v.assign(MAXSIZE, rand());

        BLOCK_OPTIMIZATION(v);
    }

    {
        NAMESPACE::vector<int> v;
        for (int i = 0; i < 10; ++i) {
            v.assign(MAXSIZE, rand());

            BLOCK_OPTIMIZATION(v);
        }
    }

    PRINT_TIME(t);
}
