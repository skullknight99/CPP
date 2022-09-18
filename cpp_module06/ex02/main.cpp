/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:54:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/18 18:01:43 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	srand(time(0));
	Base	*x;
	int	random = rand();
	std::cout << random % 3 << std::endl;
	switch (random % 3)
	{
	case 0:
		x = new	A();
		break;
	case 1:
		x = new	B();
		break;
	case 2:
		x = new	C();
		break;
	}
	return x;
}

void	identify(Base* p) {
	A	*a = dynamic_cast<A*> (p);
	B	*b = dynamic_cast<B*> (p);
	C	*c = dynamic_cast<C*> (p);
	
	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
}

void	identify(Base &p) {
	try
	{
		A	*a = dynamic_cast<A*> (&p);
		if (a)
			std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B	*b = dynamic_cast<B*> (&p);
		if (b)
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C	*c = dynamic_cast<C*> (&p);
		if (c)
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int	main() {
	Base	*x = generate();
	identify(x);
	identify(*x);
}