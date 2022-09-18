/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:06:56 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/18 14:54:31 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {
	uintptr_t	res;
	res = reinterpret_cast<uintptr_t>(ptr);
	return	res;
}

Data*	deserialize(uintptr_t raw) {
	Data*	res;
	res = reinterpret_cast<Data*> (raw);
	return	res;
}