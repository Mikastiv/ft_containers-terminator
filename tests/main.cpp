/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:27:51 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/10 15:50:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "track/track_allocator.hpp"
#include <vector>

int main()
{
    std::vector<int, track_allocator<int> > v(64, 34);

    v.clear();
}
