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

template	<class T>
class Array
{
	private:
		T	*arr;
		unsigned int number;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& obj);
		Array&	operator= (const Array& obj);
		T&	operator[] (const int size) throw (const char *);
		~Array();
		int	size() const { return this->number;}
};



#endif