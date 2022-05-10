/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prelude.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:35:37 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 17:59:57 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "track/leak_checker.hpp"
#include "track/track_allocator.hpp"
#include <cstdlib>
#include <sstream>
#include <string>

#define SEED 64

#define PRINT_FILE_LINE()                                                                          \
    {                                                                                              \
        std::cout << " (file: " << __FILE__ << ", line: " << __LINE__ << ")" << std::endl;         \
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
    std::cout << std::endl;
}

#define PRINT_VEC(vec)                                                                             \
    {                                                                                              \
        std::cout << "\nVector content:\n";                                                        \
        print_vector(vec.begin(), vec.end());                                                      \
        std::cout << std::endl;                                                                    \
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
    SETUP_ARRAY(int, s_int, 32);                                                                   \
    SETUP_ARRAY(int, b_int, 64);                                                                   \
    SETUP_ARRAY(double, s_double, 32);                                                             \
    SETUP_ARRAY(double, b_double, 64);                                                             \
    char s_char[32];                                                                               \
    iota(s_char, s_char + 32, '@');                                                                \
    char b_char[64];                                                                               \
    iota(b_char, b_char + 64, '$');                                                                \
    std::size_t s_size = 32;                                                                       \
    std::size_t b_size = 64;                                                                       \
    (void)s_size;                                                                                  \
    (void)b_size;                                                                                  \
    std::string s_string[32] = { "E@D;e53k%=", "qD([LCA,g$", "a/hx;/&a*k", "9+Zq(CcH@6",           \
                                 "b.rdqE9@(N", "[(U$ZWc_k$", "TrXEyk!qz!", "d.yT,4zA6c",           \
                                 "&=wkBZEu:)", "ZpJj*uk(dU", "Q.?.MbbkN#", "6Q,#pp4[XL",           \
                                 "c;.G4eZ@fR", "x*a/V5wDhC", "K9(f-_HWYB", "t;,u)%e52,",           \
                                 "=m*GZh)4p@", "[SXxkT$VvT", "RPJMt7Gae:", "&tjvdkNt:a",           \
                                 "k=qXK=.ti;", "RKc{[A2_kS", "Zt*JS]EE(w", "_JZnKdSjwA",           \
                                 "XJ.*#V#;nD", "6#;]g!TJLc", "a-nuT6C}(H", "XBK:Sp8t9_",           \
                                 "2,E_gSgd%(", "W:.cHC:j6U", "6i52hPmMHd", "-}rRe-KXAq" };         \
    std::string b_string[64] = {                                                                   \
        "(R$}X[.@Hv", "{)%R}!TGzF", "H-Q[u6cc.b", "t}JVnh4n-U", "D%pLivVFT_", "+w+*e5[Y@c",        \
        "e(fz[tS=9C", "]*Q(%,nQEV", "nPK&qpe[_u", "$T;e8:_AXF", "xXLZR9MX2J", ";-*P@c%2wt",        \
        "[A]/6F(fjD", "Az%}w/tSY;", "3fz-nt8VL3", "*k!v(ZC)z#", "b]ie5XzY5b", "br@F8!P8WE",        \
        "V]qp$.(=+8", "r*(-=ZSD?m", "n,[}g_N[MR", "Nu_y=wWJMJ", "(5KbKY}eZE", "@]jrdBDb$J",        \
        "AjTNx?f@}5", "J]+tJCh.gd", "rrYe}KtA$e", "/K&Nvm&%d?", "@XSd4BaykU", "./e,mjUdBD",        \
        "*XkMGmewJ_", "B65[cpmZyx", "=KMDfQ,XCk", "=5p{7d@A?)", "hUg?aFbW5a", "nnD66{Pn.?",        \
        "Hu{PT!apbD", "zJCu=f@pBj", "r_jRAhL82U", "!;pmh8TBSA", "SCQ%bVm@%-", "4)],x/CP:p",        \
        "qqFN-E@em}", "[9?n3hLSkF", "mbMiFTgSdc", "bV6yTi9:TN", "q(4Rk%$Mt_", "a9]uKH:td8",        \
        "}=a=:.VyM{", "AP4}i+@7Tw", "bU&&bV:{Y5", "?v_;ap#[8!", "7#QTfJwg;)", "ymF:(@a*JB",        \
        "ebcnqzHQvc", "jhJkk#wNLd", "d9(B9k*!zn", "fj6_rTc$9U", "j]]]_JTUNQ", "P]WH5:B#pk",        \
        "CrpJfUFEhQ", "D({r!CK[pp", "}7aa&3]XWQ", "fPty@)}xWg"                                     \
    };                                                                                             \
    (void)s_string;                                                                                \
    (void)b_string;

#define STRVECTOR NAMESPACE::vector<std::string, track_allocator<std::string> >
#define INTVECTOR NAMESPACE::vector<int, track_allocator<int> >
#define LONGVECTOR NAMESPACE::vector<long, track_allocator<long> >
#define DOUBLEVECTOR NAMESPACE::vector<double, track_allocator<double> >
#define CHARVECTOR NAMESPACE::vector<char, track_allocator<char> >
