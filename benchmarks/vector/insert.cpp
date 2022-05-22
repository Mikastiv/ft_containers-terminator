/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:20:12 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/22 19:32:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

int main()
{
    srand(time(0));

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < MAXSIZE / 2; ++i) {
            v.insert(v.end(), rand());
        }
    }

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < 200000; ++i) {
            v.insert(v.begin(), rand());
        }
    }

    for (int i = 0; i < 2; ++i) {
        NAMESPACE::vector<int> v;

        for (std::size_t i = 0; i < 5000; ++i) {
            v.insert(v.end(), rand());
        }
        for (std::size_t i = 0; i < 200000; ++i) {
            v.insert(v.begin() + 450, rand());
        }
    }
}
