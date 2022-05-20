/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedefs.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:57:43 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/19 22:01:14 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prelude.hpp"

#define CHECK_TYPEDEF(type)                                                                        \
    {                                                                                              \
        NAMESPACE::set<int>::type a = NAMESPACE::set<int>::type();                                 \
        (void)a;                                                                                   \
    }

void set_check_typedefs()
{
    CHECK_TYPEDEF(key_type);
    CHECK_TYPEDEF(value_type);
    CHECK_TYPEDEF(allocator_type);
    CHECK_TYPEDEF(key_compare);
    CHECK_TYPEDEF(value_compare);
    CHECK_TYPEDEF(size_type);
    CHECK_TYPEDEF(difference_type);
    CHECK_TYPEDEF(pointer);
    CHECK_TYPEDEF(const_pointer);
    CHECK_TYPEDEF(iterator);
    CHECK_TYPEDEF(const_iterator);
    CHECK_TYPEDEF(reverse_iterator);
    CHECK_TYPEDEF(const_reverse_iterator);

    {
        NAMESPACE::set<int>::value_type b = NAMESPACE::set<int>::value_type(-11);
        NAMESPACE::set<int>::reference c = b;
        NAMESPACE::set<int>::const_reference d = b;
        (void)b;
        (void)c;
        (void)d;
    }
}

MAIN(set_check_typedefs)
