/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:43:48 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 13:47:13 by mleblanc         ###   ########.fr       */
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

    timer t;

    {
        NAMESPACE::vector<int> v(data.begin(), data.end());

        while (!v.empty()) {
            v.erase(v.end() - 1);
        }
        BLOCK_OPTIMIZATION(v);
    }

    for (int i = 0; i < 5; ++i) {
        NAMESPACE::vector<int> v(data.begin(), data.begin() + 200000);

        while (!v.empty()) {
            v.erase(v.begin());
        }
        BLOCK_OPTIMIZATION(v);
    }

    PRINT_TIME(t);
}
