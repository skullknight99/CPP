/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:38:15 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/23 14:23:28 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define	EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <list>
#include <array>
#include <deque>

template <typename T>   typename T::iterator easyfind(T &arr ,int n)
{
    typename T::iterator it;
    it = std::find(arr.begin(), arr.end(), n);
    if (it == arr.end())
       throw std::invalid_argument("could not find number");
    return (it);
}

#endif
