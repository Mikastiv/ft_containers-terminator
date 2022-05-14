/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:38:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/14 19:51:55 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_ctor()
{
    // Default
    {
        longvector v;

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }

    // Allocator ctor
    {
        track_allocator<char> alloc;
        NAMESPACE::vector<char, track_allocator<char> > v(alloc);

        CHECK_AND_PRINT_ALL(v);

        leak_checker::check_alive_objects();
    }
}

MAIN(vec_test_ctor)
