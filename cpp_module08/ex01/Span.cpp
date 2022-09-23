/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:56:15 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/23 18:25:59 by acmaghou         ###   ########.fr       */
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
	return *this;
}

Span::~Span() {
}

void	Span::addNumber(int x) {
	if (this->vect.size() <= N)
		this->vect.push_back(x);
	else
		throw	std::length_error("already reached Span's maximum storage of integers");
}

int	Span::getMax() const {
	return (this->N);
}

int	Span::shortestSpan() {
	int	min = abs(vect[0] - vect[1]);
	if (vect.size() >= 2) {
		for (size_t i = 0; i < this->vect.size(); i++) {
			for (size_t j = i + 1; j < this->vect.size(); j++) {
				if (vect[j] >= vect[i])
				{
					if (abs(vect[i] - vect[j]) <= min)
						min = abs(vect[i] - vect[j]);
				}
			}
		}
	}
	else
		throw	Span::ContainerTooSmall();
	return min;
}

int	Span::longestSpan() {
	int	max = abs(vect[0] - vect[1]);
	if (vect.size() >= 2) {
		for (size_t i = 0; i < this->vect.size(); i++) {
			for (size_t j = i + 1; j < this->vect.size(); j++) {
				if (vect[j] >= vect[i])
				{
					if (abs(vect[i] - vect[j]) >= max)
						max = abs(vect[i] - vect[j]);
				}
			}
		}
	}
	else
		throw	Span::ContainerTooSmall();
	return max;
}

