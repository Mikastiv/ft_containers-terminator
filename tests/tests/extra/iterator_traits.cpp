/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:38:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/11/17 16:55:01 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra_prelude.hpp"
#include <iterator>
#include <vector>

#define PRINT_TYPE(type) std::cout << typeid(type).name() << std::endl;

void test_iter_traits()
{
    PRINT_TYPE(NAMESPACE::iterator_traits<char*>::iterator_category);
    PRINT_TYPE(NAMESPACE::iterator_traits<const char*>::iterator_category);
    PRINT_TYPE(NAMESPACE::iterator_traits<std::vector<std::string>::iterator>::iterator_category);

    PRINT_TYPE(NAMESPACE::iterator_traits<char*>::value_type);
    PRINT_TYPE(NAMESPACE::iterator_traits<const char*>::value_type);
    PRINT_TYPE(NAMESPACE::iterator_traits<std::vector<std::string>::iterator>::value_type);

    PRINT_TYPE(NAMESPACE::iterator_traits<int*>::pointer);
    PRINT_TYPE(NAMESPACE::iterator_traits<const char*>::pointer);
    PRINT_TYPE(NAMESPACE::iterator_traits<std::vector<std::string>::iterator>::pointer);

    PRINT_TYPE(NAMESPACE::iterator_traits<char*>::reference);
    PRINT_TYPE(NAMESPACE::iterator_traits<const char*>::reference);
    PRINT_TYPE(NAMESPACE::iterator_traits<std::vector<std::string>::iterator>::reference);

    PRINT_TYPE(NAMESPACE::iterator_traits<int*>::difference_type);
    PRINT_TYPE(NAMESPACE::iterator_traits<const int*>::difference_type);
    PRINT_TYPE(NAMESPACE::iterator_traits<std::vector<std::string>::iterator>::difference_type);
}

MAIN(test_iter_traits)
