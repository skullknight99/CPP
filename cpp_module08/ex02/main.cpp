/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:34:36 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/25 15:34:06 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main() {
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top of the stack: "<< mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size of the MutantStack: "<< mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(9);
	mstack.push(737);
	mstack.push(777);
	mstack.push(0);

	std::cout << "size of the MutantStack: "<< mstack.size() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "size of inherited stack s from mstack: " << s.size() << std::endl;
	return (0);
}
