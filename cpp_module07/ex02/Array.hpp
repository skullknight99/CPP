/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:36:48 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/21 15:45:24 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template	<typename T>
class Array
{
	private:
		T	*arr;
		unsigned int size;
	public:
		Array() {
			this->size = 0;
			this->arr = NULL;
		}

		Array(unsigned int n) {
			this->arr = new	T[n];
			this->size = n;
		}

		Array(const Array& obj) {
			this->arr = new	T[obj.getSize()];
			this->size = obj.getSize();
			for (unsigned int i = 0; i < size; i++)
				this->arr[i] = obj.arr[i];
		}

		Array&	operator= (const Array& obj) {
			this->arr = new	T[obj.getSize()];
			this->size = obj.getSize();
			for (unsigned int i = 0; i < size; i++) {
				this->arr[i] = obj.arr[i];
			}
			return *this;
		}

		T&	operator[] (const unsigned int index) {
			if (index >= this->size)
				throw	std::out_of_range("index out of range");
			return (this->arr[index]);
		}

		~Array() {
			delete[]	this->arr;
		}
		
		unsigned int getSize() const {
			return this->size;
		}
};



#endif