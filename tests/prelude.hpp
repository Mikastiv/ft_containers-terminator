/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prelude.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:35:37 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/09 18:39:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "track/leak_checker.hpp"
#include "track/track_allocator.hpp"
#include <cstdlib>

#define SEED 64

#define PRINT_FILE_LINE()                                                                          \
    {                                                                                              \
        std::cout << " (file: " << __FILE__ << ", line: " << __LINE__ << ")\n";                    \
    }

#define PRINT_LINE(msg, value)                                                                     \
    {                                                                                              \
        std::cout << msg << " " << value;                                                          \
        PRINT_FILE_LINE();                                                                         \
    }

#define PRINT_MSG(msg)                                                                             \
    {                                                                                              \
        std::cout << msg;                                                                          \
        PRINT_FILE_LINE();                                                                         \
    }

template <typename Iter>
void print_vector(Iter first, Iter last)
{
    for (Iter it = first; it != last; ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

#define PRINT_VEC(vec)                                                                             \
    {                                                                                              \
        print_vector(vec.begin(), vec.end());                                                      \
    }

#define PRINT_SIZE(vec)                                                                            \
    {                                                                                              \
        PRINT_LINE("Size:", vec.size());                                                           \
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

template <typename T>
void init_array(T* arr, std::size_t size)
{
    iota(arr, arr + size, (T)rand());
}

#define SETUP_ARRAY(type, name, size)                                                              \
    type name[size];                                                                               \
    init_array(name, size);

#define SETUP_ARRAYS()                                                                             \
    SETUP_ARRAY(long, s_long, 32);                                                                 \
    SETUP_ARRAY(long, b_long, 64);                                                                 \
    std::size_t s_long_size = 32;                                                                  \
    std::size_t b_long_size = 64;                                                                  \
    SETUP_ARRAY(int, s_int, 32);                                                                   \
    SETUP_ARRAY(int, b_int, 64);                                                                   \
    std::size_t s_int_size = 32;                                                                   \
    std::size_t b_int_size = 64;                                                                   \
    SETUP_ARRAY(double, s_double, 32);                                                             \
    SETUP_ARRAY(double, b_double, 64);                                                             \
    std::size_t s_double_size = 32;                                                                \
    std::size_t b_double_size = 64;                                                                \
    SETUP_ARRAY(char, s_char, 32);                                                                 \
    SETUP_ARRAY(char, b_char, 64);                                                                 \
    std::size_t s_char_size = 32;                                                                  \
    std::size_t b_char_size = 64;                                                                  \
    (void)s_long_size;                                                                             \
    (void)b_long_size;                                                                             \
    (void)s_int_size;                                                                              \
    (void)b_int_size;                                                                              \
    (void)s_double_size;                                                                           \
    (void)b_double_size;                                                                           \
    (void)s_char_size;                                                                             \
    (void)b_char_size;
