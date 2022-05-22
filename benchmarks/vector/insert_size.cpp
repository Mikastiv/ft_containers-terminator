/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_size.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:33:33 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/22 19:43:48 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    srand(time(0));

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < 10000; ++i) {
            v.insert(v.end(), i, rand());
        }
    }

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < 3000; ++i) {
            v.insert(v.begin(), i, rand());
        }
        for (std::size_t i = 0; i < 3000; ++i) {
            v.insert(v.begin(), 20, rand());
        }
    }

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < 1000; ++i) {
            v.insert(v.end(), rand());
        }
        for (std::size_t i = 0; i < 3000; ++i) {
            v.insert(v.begin() + 450, i, rand());
        }
    }
}
