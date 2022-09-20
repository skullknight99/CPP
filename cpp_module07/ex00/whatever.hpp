/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:34:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 10:08:44 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template	<typename T> void	swap(T &x, T &y)
{
	T	s;
	s = x;
	x = y;
	y = s;
}

template	<typename T> T min(T x, T y) {
	return (x > y ? y : x);
}

template	<typename T> T max(T x, T y) {
	return (x > y ? x : y);
}

#endif