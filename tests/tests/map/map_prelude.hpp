/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:49:46 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 21:34:00 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "map.hpp"
#include <functional>
#include <map>

#include "prelude.hpp"

template <typename It>
void print_map(It first, It last)
{
    for (; first != last; ++first) {
        std::cout << "K: " << first->first << " V: " << first->second << std::endl;
    }
}

#define PRINT_MAP(map)                                                                             \
    {                                                                                              \
        std::cout << "\nMap content:\n";                                                           \
        print_map(map.begin(), map.end());                                                         \
        std::cout << std::endl;                                                                    \
    }

#define PRINT_ALL(map)                                                                             \
    {                                                                                              \
        PRINT_SIZE(map);                                                                           \
        PRINT_MAP(map);                                                                            \
    }

typedef NAMESPACE::map<int, std::string, std::less<int>,
                       track_allocator<NAMESPACE::pair<const int, std::string> > >
    intmap;
typedef NAMESPACE::map<std::string, std::string, std::less<std::string>,
                       track_allocator<NAMESPACE::pair<const std::string, std::string> > >
    strmap;
