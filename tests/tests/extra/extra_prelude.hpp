/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_prelude.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:18:30 by mleblanc          #+#    #+#             */
/*   Updated: 2022/07/13 18:18:51 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "type_traits.hpp"

#include "prelude.hpp"

#define PRINT_IS_INTEGRAL(type)                                                                    \
    std::cout << #type << " = " << ft::is_integral<type>::value << std::endl;
