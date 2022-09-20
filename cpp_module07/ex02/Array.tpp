/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:45:20 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 18:08:02 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array() {
	this->arr = new	T[0];
}

Array::Array(unsigned int n) {
	this->arr = new	T[n];
	this->number = n;
}