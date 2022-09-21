/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:36:48 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/20 17:46:57 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template	<class T>
class Array
{
	private:
		T	*arr;
		unsigned int size;
	public:
		Array() {
			this->size = 0;
			this->arr = new	T[0];
		}

		Array(unsigned int n) {
			this->arr = new	T[n];
			this->size = n;
		}

		Array(const Array& obj) {
			*this = obj;
		}

		Array&	operator= (const Array& obj) {
			this->arr = new	T[obj.size];
			this->size = obj.size;
			for (unsigned int i = 0; i < size; i++) {
				this->arr[i] = obj.arr[i];
			}
			return *this;
		}

		T&	operator[] (const unsigned int i) throw (const char *) {
			if (i >= this->size)
				throw	std::out_of_range("index out of range");
			return (this->arr[i]);
		}

		~Array() {
			delete[]	this->arr;
		}
};



#endif