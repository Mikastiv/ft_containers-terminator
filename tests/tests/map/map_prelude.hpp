/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:49:46 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:52:47 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "map.hpp"
#include <map>

#include "prelude.hpp"

#define PRINT_MAP(map)                                                                             \
    {                                                                                              \
        std::cout << "\Map content:\n";                                                            \
        print_range(map.begin(), map.end());                                                       \
        std::cout << std::endl;                                                                    \
    }

#define PRINT_ALL(map)                                                                             \
    {                                                                                              \
        PRINT_SIZE(map);                                                                           \
        PRINT_MAP(map);                                                                            \
    }
