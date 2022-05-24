/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_ne.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:46:13 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/13 16:46:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_prelude.hpp"

void stack_test_comparisons_ne()
{
    {
        ft::stack<long> v1;
        ft::stack<long> v2;

        if (v1 != v2) {
            PRINT_MSG("Not Equal");
        }
    }
    {
        ft::stack<long> v1;
        ft::stack<long> v2;

        add_values(v1, 0, 5);

        if (v1 != v2) {
            PRINT_MSG("Not Equal.");
        }
    }
    {
        ft::stack<long> v1;
        ft::stack<long> v2;

        add_values(v1, 0, 8);
        add_values(v2, 0, 9);

        if (v1 != v2) {
            PRINT_MSG("Not Equal..");
        }
    }
    {
        ft::stack<long> v1;
        ft::stack<long> v2;

        add_values(v1, 0, 9);
        add_values(v2, 0, 8);

        if (v1 != v2) {
            PRINT_MSG("Not Equal...");
        }
    }
    {
        ft::stack<long> v1;
        ft::stack<long> v2;

        add_values(v1, 1, 64);
        add_values(v2, 1, 64);

        if (v1 != v2) {
            PRINT_MSG("Not Equal....");
        }
    }
}

MAIN(stack_test_comparisons_ne)
