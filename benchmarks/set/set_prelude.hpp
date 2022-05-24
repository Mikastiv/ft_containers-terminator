/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prelude.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:03:36 by mleblanc          #+#    #+#             */
/*   Updated: 2022/05/23 20:23:37 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "set.hpp"
#include "vector.hpp"
#include <set>
#include <vector>

#include "prelude.hpp"

// I assume here that each node of set<int> will be < 128 bytes which I think is fair
// enough for:
// - int (4 bytes)
// - 3 ptrs (24 bytes)
// - int(enum) or bool for the color (4 or 1)
// - +some alignment
// --------------------------
// ~32 bytes
#define MAXSIZE ((std::size_t)MAXRAM / 128)
