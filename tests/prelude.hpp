/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prelude.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:35:37 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/17 16:29:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "track/leak_checker.hpp"
#include "track/track_allocator.hpp"
#include <cstdlib>
#include <limits>
#include <sstream>
#include <string>

#define SEED 64

#define PRINT_FILE_LINE()                                                                          \
    {                                                                                              \
        std::cout << " (file: " << __FILE__ << ", line: " << __LINE__ << ")" << std::endl;         \
    }

#define PRINT_LINE(msg, value)                                                                     \
    {                                                                                              \
        std::cout << msg << " " << (value);                                                        \
        PRINT_FILE_LINE();                                                                         \
    }

#define PRINT_MSG(msg)                                                                             \
    {                                                                                              \
        std::cout << msg;                                                                          \
        PRINT_FILE_LINE();                                                                         \
    }

template <typename Iter>
void print_range(Iter first, Iter last)
{
    for (Iter it = first; it != last; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

#define PRINT_SIZE(c)                                                                              \
    {                                                                                              \
        PRINT_LINE("Size:", c.size());                                                             \
    }

#define CATCH_UNHANDLED_EX()                                                                       \
    catch (...)                                                                                    \
    {                                                                                              \
        std::cout << "unhandled exception";                                                        \
        PRINT_FILE_LINE();                                                                         \
    }

template <typename ForwardIt, typename T>
void iota(ForwardIt first, ForwardIt last, T value = T())
{
    while (first != last) {
        *first++ = value;
        ++value;
    }
}

#ifndef NAMESPACE
#define NAMESPACE ft
#endif

#ifdef SINGLE_BINARY
#define MAIN(test_func)
#else
#define MAIN(test_func)                                                                            \
    int main()                                                                                     \
    {                                                                                              \
        srand(SEED);                                                                               \
        test_func();                                                                               \
        leak_checker::check_all();                                                                 \
    }
#endif

struct true_type {
    static const bool value = true;
    typedef true_type type;
};

struct false_type {
    static const bool value = false;
    typedef false_type type;
};

template <typename T, typename U>
struct is_same : public false_type {
};

template <typename T>
struct is_same<T, T> : public true_type {
};

struct big_struct {
    long data[2000];
};
