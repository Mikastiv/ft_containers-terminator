/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedefs.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:00:14 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/09 17:08:41 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

#define CHECK_TYPEDEF(type)                                                                        \
    {                                                                                              \
        NAMESPACE::vector<int>::type a = NAMESPACE::vector<int>::type();                           \
        (void)a;                                                                                   \
    }

void vec_check_typedefs()
{
    CHECK_TYPEDEF(value_type);
    CHECK_TYPEDEF(allocator_type);
    CHECK_TYPEDEF(size_type);
    CHECK_TYPEDEF(difference_type);
    CHECK_TYPEDEF(pointer);
    CHECK_TYPEDEF(const_pointer);
    CHECK_TYPEDEF(iterator);
    CHECK_TYPEDEF(const_iterator);
    CHECK_TYPEDEF(reverse_iterator);
    CHECK_TYPEDEF(const_reverse_iterator);

    {
        NAMESPACE::vector<int>::value_type a = 10;
        NAMESPACE::vector<int>::reference b = a;
        NAMESPACE::vector<int>::const_reference c = a;
        (void)a;
        (void)b;
        (void)c;
    }
}

MAIN(vec_check_typedefs)
