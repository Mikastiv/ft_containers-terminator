/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_prelude.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:18:30 by mleblanc          #+#    #+#             */
/*   Updated: 2022/11/16 17:32:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iterator.hpp"
#include "type_traits.hpp"

#include "prelude.hpp"
#include "type_traits_impl.hpp"

#define PRINT_IS_INTEGRAL(type)                                                                    \
    std::cout << #type << " = " << SFINAE::is_integral<type>::value << std::endl;

#define PRINT_VEC(vec)                                                                             \
    {                                                                                              \
        std::cout << "\nVector content:\n";                                                        \
        print_range(vec.begin(), vec.end());                                                       \
        std::cout << std::endl;                                                                    \
    }

template <typename T>
T times2(const T& x)
{
    return x * 2;
}
