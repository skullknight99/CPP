/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:45:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 11:39:53 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	// first case
	try {
	Bureaucrat b("you", 2);
	Form       formB("the contract", 20, 12);
	std::cout << b << std::endl;
	b.signForm(formB);
	std::cout << formB;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "///////////////////" << std::endl;
	// second case
	try {
		Bureaucrat  x("x", 1);
		Form		formX("SpaceX", 10, 2);
		std::cout << x << std::endl;
		x.signForm(formX);
		std::cout << formX;
		x.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "///////////////////" << std::endl;
	// third case
	try {
		Bureaucrat	y("y", 150);
		Form		formY("Unicef", 140, 10);
		std::cout << y << std::endl;
		y.signForm(formY);
		std::cout << formY;
		y.decrement();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "///////////////////" << std::endl;
	return 0;
}