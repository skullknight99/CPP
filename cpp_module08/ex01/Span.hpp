/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:56:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/23 18:24:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

class	Span {
	private:
		unsigned int		N;
		std::vector<int>	vect;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& obj);
		Span&	operator= (const Span& obj);
		~Span();
		void	addNumber(int	x);
		int		shortestSpan();
		int		longestSpan();
		int		getMax() const;
		class ContainerTooSmall : public	std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Container too small, cannot calculate span");
				}
		};
};

#endif
