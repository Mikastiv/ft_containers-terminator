/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:51:37 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/09 17:54:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

#define CHECK_TYPE(T, type)                                                                        \
    {                                                                                              \
        if (!is_same<ft::vector<T>::type, std::vector<T>::type>::value) {                          \
            std::cout << "wrong type for ft::vector<" << #T << ">::" << #type << "\n";             \
        }                                                                                          \
    }

void vec_check_types()
{
    CHECK_TYPE(float, value_type);
    CHECK_TYPE(float, allocator_type);
    CHECK_TYPE(float, size_type);
    CHECK_TYPE(char, difference_type);
    CHECK_TYPE(char, reference);
    CHECK_TYPE(char, const_reference);
}

MAIN(vec_check_types)