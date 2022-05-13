/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_le.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:01:02 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/13 17:01:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_prelude.hpp"

void stack_test_comparisons_le()
{
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        if (v1 <= v2) {
            PRINT_MSG("Less Eq");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v2, 0, 64);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq.");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 0, 64);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq..");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 0, 63);
        add_value(v2, 0, 64);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq...");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 0, 64);
        add_value(v2, 0, 63);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq....");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 1024, 63);
        add_values(v2, 1024, 64);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq.....");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 1024, 64);
        add_values(v2, 1024, 63);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq......");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_values(v1, 1, 64);
        add_values(v2, 1, 64);

        v1.top() = 1;

        if (v1 <= v2) {
            PRINT_MSG("Less Eq.......");
        }
    }
    {
        ft::stack<int> v1;
        ft::stack<int> v2;

        add_value(v1, 1, 64);
        add_value(v2, 1, 64);

        if (v1 <= v2) {
            PRINT_MSG("Less Eq........");
        }
    }
}

MAIN(stack_test_comparisons_le)
