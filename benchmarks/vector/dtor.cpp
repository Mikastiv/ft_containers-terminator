/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dtor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:42:43 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 15:00:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    SETUP;

    NAMESPACE::vector<int> data;

    for (std::size_t i = 0; i < MAXSIZE; ++i) {
        data.push_back(rand());
    }

    long sum = 0;
    timer t;

    for (int i = 0; i < 5; ++i) {
        sum += t.get_time();
        NAMESPACE::vector<int> v(data.begin(), data.end());
        BLOCK_OPTIMIZATION(v);
        t.reset();
    }

    std::cout << sum << "ms" << std::endl;
}
