/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_size.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:54:05 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/09 19:55:04 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

struct abc {
    int data[1024];
    long num;
};

void vec_test_max_size()
{
    PRINT_LINE("Unsigned Char max size:", NAMESPACE::vector<unsigned char>().max_size());
    PRINT_LINE("Char max size:", NAMESPACE::vector<char>().max_size());
    PRINT_LINE("Int max size:", NAMESPACE::vector<int>().max_size());
    PRINT_LINE("Long max size:", NAMESPACE::vector<long>().max_size());
    PRINT_LINE("Short max size:", NAMESPACE::vector<short>().max_size());
    PRINT_LINE("abc struct max size:", NAMESPACE::vector<abc>().max_size());
    PRINT_LINE("Float max size:", NAMESPACE::vector<float>().max_size());
}

MAIN(vec_test_max_size)
