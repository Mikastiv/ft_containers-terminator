/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor_size.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:00:53 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 13:13:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    SETUP;

    timer t;
    for (int i = 0; i < 10; ++i) {
        NAMESPACE::vector<int> v(MAXSIZE, rand());

        BLOCK_OPTIMIZATION(v);
    }

    PRINT_TIME(t);
}
