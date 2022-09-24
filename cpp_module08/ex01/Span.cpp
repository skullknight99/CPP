/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:56:15 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/24 11:15:56 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
	this->N = 0;
}

Span::Span(unsigned int N){
	this->N	= N;
}

Span::Span(const Span& obj) {
	*this = obj;
}

Span&	Span::operator= (const Span& obj) {
	this->N = obj.N;
	this->vect = obj.vect;
	return *this;
}

Span::~Span() {
}

void	Span::addNumber(int x) {
	if (this->vect.size() < N)
		this->vect.push_back(x);
	else
		throw	Span::maxSize();
}

int	Span::getMax() const {
	return (this->N);
}

int	Span::shortestSpan() {
	int	min = abs(vect[0] - vect[1]);
	std::vector<int>::iterator it = vect.begin();
	std::vector<int>::iterator it2 = it + 1;
	std::vector<int>::iterator	endator = vect.end();
	if (vect.size() >= 2) {
		while (it != endator) {
			it2 = it +1;
			while (it2 != endator) {
				if (abs(*it - *it2) <= min)
					min = abs(*it - *it2);
				it2++;
			}
			it++;
		}
	}
	else
		throw	Span::ContainerTooSmall();
	return min;
}

int	Span::longestSpan() {
	int	max = abs(vect[0] - vect[1]);
	std::vector<int>::iterator it = vect.begin();
	std::vector<int>::iterator it2 = it + 1;
	std::vector<int>::iterator	endator = vect.end();
	if (vect.size() >= 2) {
		while (it != endator) {
			it2 = it +1;
			while (it2 != endator) {
				if (abs(*it - *it2) >= max)
					max = abs(*it - *it2);
				it2++;
			}
			it++;
		}
	}
	else
		throw	Span::ContainerTooSmall();
	return max;
}

