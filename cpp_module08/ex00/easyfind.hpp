/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:38:15 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/22 17:11:08 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define	EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

template	<typename T>int	easyfind(T &x, int a) {
	int i = 0;
	while (x[i] && x[i] != a)
		i++;
	if (x[i] == a)
		return (i);
	else
		throw	std::out_of_range("could not find element in container");
}

#endif