/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riterator_typedefs.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:30:12 by mleblanc          #+#    #+#             */
/*   Updated: 2022/11/16 16:42:29 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_prelude.hpp"
#include <vector>

#define CHECK_TYPEDEF(type)                                                                        \
    {                                                                                              \
        NAMESPACE::reverse_iterator<std::vector<int>::iterator>::type a =                          \
            NAMESPACE::reverse_iterator<std::vector<int>::iterator>::type();                       \
        (void)a;                                                                                   \
    }

void riterator_check_typedefs()
{
    CHECK_TYPEDEF(iterator_type);
    CHECK_TYPEDEF(iterator_category);
    CHECK_TYPEDEF(difference_type);
    CHECK_TYPEDEF(pointer);

    {
        NAMESPACE::reverse_iterator<std::vector<int>::iterator>::value_type a = 10;
        NAMESPACE::reverse_iterator<std::vector<int>::iterator>::reference b = a;
        (void)a;
        (void)b;
    }
}

MAIN(riterator_check_typedefs)
