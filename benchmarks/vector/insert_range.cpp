/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:30:38 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 13:15:19 by mleblanc         ###   ########.fr       */
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
    for (int i = 0; i < 10; ++i) {
        NAMESPACE::vector<int> v;

        v.insert(v.begin(), data.begin(), data.end());

        BLOCK_OPTIMIZATION(v);
    }

    for (int i = 0; i < 10; ++i) {
        NAMESPACE::vector<int> v;

        v.insert(v.begin(), data.begin(), data.begin() + 1000000);
        v.insert(v.begin() + 60000, data.begin(), data.begin() + 1000000);

        BLOCK_OPTIMIZATION(v);
    }

    PRINT_TIME(t);
}
