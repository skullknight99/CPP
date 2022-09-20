/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:38:42 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 15:22:18 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template	<typename T> void	iter(T *arr, int len, void (*func ) (T const &x)) {
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif