/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:45:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/15 15:40:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	// first case
	try {
		Bureaucrat b("you", 2);
		Form	*formB = new	ShrubberyCreationForm("Shrub");
		std::cout << *formB;
		std::cout << b << std::endl;
		b.executeForm(*formB);
		b.signForm(*formB);
		b.executeForm(*formB);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// second case
	try {
		Bureaucrat  x("x", 1);
		Form	*formX = new	RobotomyRequestForm("Moulinette");
		std::cout << x << std::endl;
		std::cout << *formX;
		x.increment();
		x.signForm(*formX);
		x.executeForm(*formX);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// third case
	try {
		Bureaucrat	y("y", 140);
		Form	*formY = new	PresidentialPardonForm("Larbi");
		std::cout << y << std::endl;
		std::cout << *formY;
		y.decrement();
		y.signForm(*formY);
		y.executeForm(*formY);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	return 0;
}