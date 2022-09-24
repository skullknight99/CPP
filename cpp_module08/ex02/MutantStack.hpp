/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:44:31 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/24 16:57:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>

template	<typename T>
class MutantStack
{
	private:
		std::stack<int> s;
		unsigned int size;
	public:
		MutantStack();
		~MutantStack();
		void	push(int n);
		int		top();
		void	pop();
		int		size();
		class iterator
		{
			private:
				/* data */
			public:
				iterator(/* args */);
				~iterator();
		};
		
};



#endif