/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 20:49:46 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/16 10:45:09 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "map.hpp"
#include <functional>
#include <map>
#include <string>

#include "prelude.hpp"

template <typename It>
void print_map(It first, It last)
{
    for (; first != last; ++first) {
        std::cout << "K: " << first->first << " V: " << first->second << " ";
    }
    std::cout << std::endl;
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

void init_array_int_str(NAMESPACE::pair<int, std::string>* arr, std::size_t size)
{
    std::string x[64] = { "(R$}X[.@Hv", "{)%R}!TGzF", "H-Q[u6cc.b", "t}JVnh4n-U", "D%pLivVFT_",
                          "+w+*e5[Y@c", "e(fz[tS=9C", "]*Q(%,nQEV", "nPK&qpe[_u", "$T;e8:_AXF",
                          "xXLZR9MX2J", ";-*P@c%2wt", "[A]/6F(fjD", "Az%}w/tSY;", "3fz-nt8VL3",
                          "*k!v(ZC)z#", "b]ie5XzY5b", "br@F8!P8WE", "V]qp$.(=+8", "r*(-=ZSD?m",
                          "n,[}g_N[MR", "Nu_y=wWJMJ", "(5KbKY}eZE", "@]jrdBDb$J", "AjTNx?f@}5",
                          "J]+tJCh.gd", "rrYe}KtA$e", "/K&Nvm&%d?", "@XSd4BaykU", "./e,mjUdBD",
                          "*XkMGmewJ_", "B65[cpmZyx", "=KMDfQ,XCk", "=5p{7d@A?)", "hUg?aFbW5a",
                          "nnD66{Pn.?", "Hu{PT!apbD", "zJCu=f@pBj", "r_jRAhL82U", "!;pmh8TBSA",
                          "SCQ%bVm@%-", "4)],x/CP:p", "qqFN-E@em}", "[9?n3hLSkF", "mbMiFTgSdc",
                          "bV6yTi9:TN", "q(4Rk%$Mt_", "a9]uKH:td8", "}=a=:.VyM{", "AP4}i+@7Tw",
                          "bU&&bV:{Y5", "?v_;ap#[8!", "7#QTfJwg;)", "ymF:(@a*JB", "ebcnqzHQvc",
                          "jhJkk#wNLd", "d9(B9k*!zn", "fj6_rTc$9U", "j]]]_JTUNQ", "P]WH5:B#pk",
                          "CrpJfUFEhQ", "D({r!CK[pp", "}7aa&3]XWQ", "fPty@)}xWg" };

    for (std::size_t i = 0; i < size; ++i) {
        arr[i] = NAMESPACE::make_pair(rand(), x[i]);
    }
}

void init_array_str_str(NAMESPACE::pair<std::string, std::string>* arr, std::size_t size)
{
    std::string x[32] = { "Nh0rnsCHUp", "36maaiaEKh", "TwiJdLb42n", "r2QYR5Y7gS", "qdWnXZ3Wxt",
                          "xHkOgXHZAF", "LyDWXMHqym", "vUsqDHCD6a", "gCuoSt1hC5", "KCA4aEZpma",
                          "dsuXedeXbQ", "0OYzZMVpbl", "KcmKLYVgsL", "NPQMd8jxg5", "lG0jXkgFFD",
                          "vPw4KSXhjI", "1uietTZSid", "GxUUOF0SEV", "lswaA5Ugf7", "Gm9YZfuzc6",
                          "bqnCYwTTEY", "0j2748ZFPz", "Lgkj0rSc3t", "e7jn10NcZu", "0sKwMXmcGi",
                          "RZSFfvl9A7", "Q93JY2ltbm", "SMu0I1dfbq", "kalSxPPiGV", "wRzYk2muHo",
                          "hiak1A2JMm", "cVD3GWM8JB" };

    std::string y[32] = { "bQmLmWJ2BM", "gin1UzKcsT", "PxhpAr41IW", "w5aA4rElvU", "Iq7M6yyOxE",
                          "RePPdKvZD9", "cVoUuMjWHR", "EMmB8Mpp7p", "S01Wl06OoQ", "KifBh3LcZE",
                          "iSrQiUbdNr", "mupFPRcppw", "tGw9ueijjX", "ByULfMgpBy", "2QLU1Mk85z",
                          "8ex8GRH7Gq", "OhyEROuaGj", "JDYqr955PV", "iPjqj9JyBi", "Cwz0PTaY8P",
                          "7Kj2Hs6qbB", "9T8pBAIsRT", "gP6Zz14p4S", "i3NXu1p0nr", "84YQESbl88",
                          "JZDPFV5xEn", "AtoNLX4msN", "y8R9JAd0W1", "Rggt4hpbVW", "Blsmh9yUI0",
                          "vEwkaAOw5d", "57hNUW4fzv" };

    for (std::size_t i = 0; i < size; ++i) {
        arr[i] = NAMESPACE::make_pair(x[i], y[i]);
    }
}

#define SETUP_ARRAYS()                                                                             \
    NAMESPACE::pair<int, std::string> intstr_arr[64];                                              \
    init_array_int_str(intstr_arr, 64);                                                            \
    NAMESPACE::pair<std::string, std::string> strstr_arr[32];                                      \
    init_array_str_str(strstr_arr, 32);                                                            \
    std::size_t intstr_size = 64;                                                                  \
    std::size_t strstr_size = 32;                                                                  \
    (void)intstr_arr;                                                                              \
    (void)strstr_arr;                                                                              \
    (void)intstr_size;                                                                             \
    (void)strstr_size;

typedef NAMESPACE::map<int, std::string, std::less<int>,
                       track_allocator<NAMESPACE::pair<const int, std::string> > >
    intmap;
typedef NAMESPACE::map<std::string, std::string, std::less<std::string>,
                       track_allocator<NAMESPACE::pair<const std::string, std::string> > >
    strmap;
