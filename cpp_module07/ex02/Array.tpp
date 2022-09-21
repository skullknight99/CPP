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

Array<T>::Array() {
	this->size = 0;
	this->arr = new	T[0];
}

Array<T>::Array(unsigned int n) {
	this->arr = new	T[n];
	this->size = n;
}

Array<T>::Array(const Array& obj) {
	*this = obj;
}

Array&	Array<T>::operator= (const Array& obj) {
	this->arr = new	T[obj.number];
	this->size = obj.size;
	for (int i = 0; i < size; i++) {
		this->arr[i] = obj.arr[i];
	}
	return *this;
}

T&	Array<T>::operator[] (const int i) throw (const char *) {
	if (i > size)
		throw	std::out_of_range("index out of range");
	return (this->arr[i]);
}

Array<T>::~Array() {
	delete[]	arr;
}