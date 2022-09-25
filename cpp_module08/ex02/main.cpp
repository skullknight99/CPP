/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:34:36 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/25 14:44:16 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main() {
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top of the stack: "<< mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << "size of the stack: "<< mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(9);
	mstack.push(737);
	mstack.push(777);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

// int	main() {
// 	std::list<int>	mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);
	
// 	std::cout << "top of the stack: "<< mstack.front() << std::endl;

// 	mstack.pop_front();
	
// 	std::cout << "size of the stack: "<< mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(9);
// 	mstack.push_back(737);
// 	mstack.push_back(777);
// 	mstack.push_back(0);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return (0);
// }