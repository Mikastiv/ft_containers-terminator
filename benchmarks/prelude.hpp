/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prelude.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:25:27 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 15:42:10 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef NAMESPACE
#define NAMESPACE ft
#endif

#include "timer/timer.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#define MAXRAM (std::numeric_limits<int>::max())

#define PRINT_TIME(t)                                                                              \
    {                                                                                              \
        std::cout << t.get_time() << "ms" << std::endl;                                            \
    }

#define SETUP                                                                                      \
    srand(64);                                                                                     \
    volatile int x = 0;                                                                            \
    (void)x;

#define BLOCK_OPTIMIZATION(v)                                                                      \
    {                                                                                              \
        if (v[0] == 64) {                                                                          \
            x = x + 64;                                                                            \
        }                                                                                          \
    }

template <typename ForwardIt, typename T>
void iota(ForwardIt first, ForwardIt last, T value = T())
{
    while (first != last) {
        *first++ = value;
        ++value;
    }
}
