/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_lt.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:47:34 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/13 16:51:23 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_prelude.hpp"

void stack_test_comparisons_lt()
{
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        if (v1 < v2) {
            PRINT_MSG("Less");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v2, 0, 64);

        if (v1 < v2) {
            PRINT_MSG("Less.");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 0, 64);

        if (v1 < v2) {
            PRINT_MSG("Less..");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 0, 63);
        add_values(v2, 0, 64);

        if (v1 < v2) {
            PRINT_MSG("Less...");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 0, 64);
        add_value(v2, 0, 63);

        if (v1 < v2) {
            PRINT_MSG("Less....");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 1024, 64);
        add_values(v2, 1024, 63);

        if (v1 < v2) {
            PRINT_MSG("Less......");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 1024, 64);
        add_values(v2, 1024, 64);

        v1.top() = 1;

        if (v1 < v2) {
            PRINT_MSG("Less.......");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 1024, 64);
        add_value(v2, 1024, 64);

        if (v1 < v2) {
            PRINT_MSG("Less........");
        }
    }
}

MAIN(stack_test_comparisons_lt)
