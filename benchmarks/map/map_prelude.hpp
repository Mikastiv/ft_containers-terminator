/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:36 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 14:31:31 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "map.hpp"
#include "vector.hpp"
#include <map>
#include <vector>

#include "prelude.hpp"

// I assume here that each node of map<int, int> will be < 128 bytes which I think is fair
// enough for:
// - pair<int, int> (8 bytes)
// - 3 ptrs (24 bytes)
// - int(enum) or bool for the color (4 or 1)
// - +some alignment
// --------------------------
// ~40 bytes
#define MAXSIZE ((std::size_t)MAXRAM / 128)
