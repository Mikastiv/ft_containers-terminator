/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctor.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:38:58 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 16:55:36 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_prelude.hpp"

void vec_test_ctor()
{
    // Default
    {
        LONGVECTOR v;

        CHECK_AND_PRINT_ALL(v);
    }

    // Allocator ctor
    {
        track_allocator<char> alloc;
        NAMESPACE::vector<char, track_allocator<char> > v(alloc);

        CHECK_AND_PRINT_ALL(v);
    }
}

MAIN(vec_test_ctor)
