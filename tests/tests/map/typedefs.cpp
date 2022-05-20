/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedefs.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:50:55 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 22:05:22 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_prelude.hpp"

#define CHECK_TYPEDEF(type)                                                                        \
    {                                                                                              \
        NAMESPACE::map<int, unsigned int>::type a = NAMESPACE::map<int, unsigned int>::type();     \
        (void)a;                                                                                   \
    }

void map_check_typedefs()
{
    CHECK_TYPEDEF(key_type);
    CHECK_TYPEDEF(mapped_type);
    CHECK_TYPEDEF(value_type);
    CHECK_TYPEDEF(allocator_type);
    CHECK_TYPEDEF(key_compare);
    CHECK_TYPEDEF(size_type);
    CHECK_TYPEDEF(difference_type);
    CHECK_TYPEDEF(pointer);
    CHECK_TYPEDEF(const_pointer);
    CHECK_TYPEDEF(iterator);
    CHECK_TYPEDEF(const_iterator);
    CHECK_TYPEDEF(reverse_iterator);
    CHECK_TYPEDEF(const_reverse_iterator);

    {
        NAMESPACE::map<int, unsigned int>::value_type b =
            NAMESPACE::map<int, unsigned int>::value_type(-11, 85);
        NAMESPACE::map<int, unsigned int>::reference c = b;
        NAMESPACE::map<int, unsigned int>::const_reference d = b;
        (void)b;
        (void)c;
        (void)d;
    }
}

MAIN(map_check_typedefs)
