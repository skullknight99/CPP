/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:44:31 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/25 15:23:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>

template	<typename T>
class MutantStack : public	std::stack<T>
{
	public:
		MutantStack() {
		}
		MutantStack(const MutantStack& obj) : std::stack<T>(obj) {
		}
		~MutantStack() {
			this->c.clear();
		}
		MutantStack&	operator= (const MutantStack& obj) {
			this->c = obj.c;
			return *this;
		}
		typedef	typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() {
			return this->c.begin();
		}
		iterator	end() {
			return this->c.end();
		}
};



#endif