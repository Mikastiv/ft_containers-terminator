/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:04:01 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/09 20:05:26 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_prelude.hpp"

#define CHECK_TYPE(T, type)                                                                        \
    {                                                                                              \
        if (!is_same<NAMESPACE::stack<T>::type, std::stack<T>::type>::value) {                     \
            std::cout << "wrong type for ft::stack<" << #T << ">::" << #type << "\n";              \
        }                                                                                          \
    }

void stack_check_types()
{
    CHECK_TYPE(float, value_type);
    CHECK_TYPE(float, size_type);
    CHECK_TYPE(char, reference);
    CHECK_TYPE(char, const_reference);
}

MAIN(stack_check_types)
