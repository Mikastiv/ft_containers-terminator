/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:07:57 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/24 15:55:21 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_prelude.hpp"

void stack_test_misc()
{
    {
        NAMESPACE::stack<int, NAMESPACE::vector<int, track_allocator<int> > > st;

        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));

        st.push(34);

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());

        st.push(64);

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());

        st.top() = 1;

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());

        st.push(128);

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Top:", st.top());

        const NAMESPACE::stack<int, NAMESPACE::vector<int, track_allocator<int> > > st1(st);

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());

        st.pop();
        st.pop();

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());

        st.pop();

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));

        st = st1;

        PRINT_LINE("Size:", st.size());
        PRINT_LINE("Empty:", (st.empty() ? "true" : "false"));
        PRINT_LINE("Top:", st.top());
    }
}

MAIN(stack_test_misc)
