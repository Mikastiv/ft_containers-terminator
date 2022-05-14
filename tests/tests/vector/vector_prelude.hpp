/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_prelude.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:39:36 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:50:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "vector.hpp"
#include <vector>

#include "prelude.hpp"

#define PRINT_VEC(vec)                                                                             \
    {                                                                                              \
        std::cout << "\nVector content:\n";                                                        \
        print_range(vec.begin(), vec.end());                                                       \
        std::cout << std::endl;                                                                    \
    }

#define PRINT_ALL(vec)                                                                             \
    {                                                                                              \
        PRINT_SIZE(vec);                                                                           \
        PRINT_VEC(vec);                                                                            \
    }

#define CHECK_CAPACITY(vec)                                                                        \
    {                                                                                              \
        if (!(vec.capacity() >= vec.size())) {                                                     \
            PRINT_MSG("Capacity is smaller than size");                                            \
        } else {                                                                                   \
            PRINT_MSG("Capacity Ok");                                                              \
        }                                                                                          \
    }

#define CHECK_AND_PRINT_ALL(vec)                                                                   \
    {                                                                                              \
        CHECK_CAPACITY(vec);                                                                       \
        PRINT_ALL(vec);                                                                            \
    }

typedef NAMESPACE::vector<std::string, track_allocator<std::string> > strvector;
typedef NAMESPACE::vector<int, track_allocator<int> > intvector;
typedef NAMESPACE::vector<long, track_allocator<long> > longvector;
typedef NAMESPACE::vector<double, track_allocator<double> > doublevector;
typedef NAMESPACE::vector<char, track_allocator<char> > charvector;
