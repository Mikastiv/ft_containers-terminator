/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:49:21 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 02:55:03 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "set.hpp"
#include <set>

#include "prelude.hpp"

template <typename It>
void print_set(It first, It last)
{
    for (; first != last; ++first) {
        std::cout << " V: " << *first << " ";
    }
    std::cout << std::endl;
}

#define PRINT_SET(set)                                                                             \
    {                                                                                              \
        std::cout << "\nSet content:\n";                                                           \
        print_set(set.begin(), set.end());                                                         \
        std::cout << std::endl;                                                                    \
    }

#define PRINT_ALL(set)                                                                             \
    {                                                                                              \
        PRINT_SIZE(set);                                                                           \
        PRINT_SET(set);                                                                            \
    }

template <typename T>
void init_array(T* arr, std::size_t size)
{
    iota(arr, arr + size, (T)rand());
}

#define SETUP_ARRAY(type, name, size)                                                              \
    type name[size];                                                                               \
    init_array(name, size);

#define SETUP_ARRAYS()                                                                             \
    SETUP_ARRAY(int, int_arr, 64);                                                                 \
    std::size_t int_size = 64;                                                                     \
    std::size_t str_size = 32;                                                                     \
    (void)int_size;                                                                                \
    (void)str_size;                                                                                \
    std::string str_arr[32] = {                                                                    \
        "QExoqp0nICr0sXsHqty2", "naax9QcpJhvaL7DezsNQ", "25ZTtB6wbptfbxM8AvHB",                    \
        "tShYNtc0MkdjqLrOatgz", "7Z3kf1Qec0NnsLSEpbOt", "WhkSNrKJC966fvjZ2Or1",                    \
        "8vlxlFRRgW7yYj4GO7dt", "5sq1aoT8zP0HaHj3nFOK", "61Dv31GYZhkgjKCErpng",                    \
        "l0IIcWWHhOcPzoxEamQM", "bE1RYclskwXlhCm46YFs", "kXeoi5qz94JYPqSDTs79",                    \
        "TFsQP1dz8VVos9KzUpY0", "b3wYQR7An193gjgYuRj3", "xSmyNsnSJ47jLqrvbpyr",                    \
        "guAIP2Wq43Gf8VhHsyu5", "yT6c2loPebHovnq9BQog", "3qvU1xcVm2g1DKFDlqh4",                    \
        "L0q8RR9P41VD4sVjdnWl", "YdjESsIZM4b1oGQPjpBe", "l1ZVQbWKw7brHUSimJgq",                    \
        "xdn0cf4vqRzpfXWtl10G", "lYnZvpqaV0s8DowMZwzV", "8P1cyKrwJNLoJyvLjYqO",                    \
        "4MhOXNbAX23CEijO5cRT", "tHe3miAwCOVQbuoLaEP2", "l6uNLsc8fiLl3eWoG6j6",                    \
        "477xt6l0lph9ALQdr4HX", "D9UJNe4s8YF02LhrwOdl", "dLCisBNOdE8yugntu6cj",                    \
        "YvY4aQFHgAuagn4dFLO1", "eGR6Dtv7LW75qlV5Fkik"                                             \
    };                                                                                             \
    (void)str_arr;

typedef NAMESPACE::set<int, std::less<int>, track_allocator<int> > intset;
typedef NAMESPACE::set<std::string, std::less<std::string>, track_allocator<std::string> > strset;

#define PRINT_BOUND(b, end)                                                                        \
    {                                                                                              \
        if (b != end) {                                                                            \
            PRINT_LINE("Value:", *b);                                                              \
        } else {                                                                                   \
            PRINT_MSG("End iterator");                                                             \
        }                                                                                          \
        std::cout << std::endl;                                                                    \
    }

#define PRINT_EQ_RANGE(p, end)                                                                     \
    {                                                                                              \
        std::cout << "--------------------------------\n";                                         \
        PRINT_BOUND(p.first, end);                                                                 \
        PRINT_BOUND(p.second, end);                                                                \
    }

#define PRINT_IT_PTR(it)                                                                           \
    {                                                                                              \
        PRINT_LINE("It:", *(it));                                                                  \
    }
