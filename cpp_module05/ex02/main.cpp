/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:45:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/15 17:41:54 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	// first case
	try {
		Bureaucrat	signer1("Signer", 144);
		Bureaucrat	executor1("Executor", 136);
		Form	*formB = new	ShrubberyCreationForm("Pool");
		std::cout << *formB;
		std::cout << formB->getTarget() << std::endl;
		std::cout << signer1 << std::endl;
		std::cout << executor1 << std::endl;
		executor1.executeForm(*formB);
		signer1.signForm(*formB);
		executor1.executeForm(*formB);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// RobotomyRequestForm that does get executed
	try {
		Bureaucrat  signer2("Signer", 71);
		Bureaucrat	executor2("Executor", 44);
		Form	*formX = new	RobotomyRequestForm("Moulinette");
		std::cout << *formX;
		std::cout << formX->getTarget() << std::endl;
		std::cout << signer2 << std::endl;
		std::cout << executor2 << std::endl;
		signer2.decrement();
		executor2.executeForm(*formX);
		signer2.signForm(*formX);
		executor2.executeForm(*formX);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// PresidentialForm that gets executed.
	try {
		Bureaucrat  signer3("Signer", 16);
		Bureaucrat	executor3("Executor", 4);
		Form	*formY = new	PresidentialPardonForm("Larbi");
		std::cout << *formY;
		std::cout << formY->getTarget() << std::endl;
		std::cout << signer3 << std::endl;
		std::cout << executor3 << std::endl;
		signer3.decrement();
		executor3.executeForm(*formY);
		signer3.signForm(*formY);
		executor3.executeForm(*formY);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// ShrubberyForm that does not execute
	try {
		Bureaucrat	signer4("Signer", 149);
		Bureaucrat	executor4("Executor", 140);
		Form	*formB = new	ShrubberyCreationForm("GG");
		std::cout << *formB;
		std::cout << formB->getTarget() << std::endl;
		std::cout << signer4 << std::endl;
		std::cout << executor4 << std::endl;
		executor4.executeForm(*formB);
		signer4.signForm(*formB);
		executor4.executeForm(*formB);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// RobotomyRequestForm that does not get executed
	try {
		Bureaucrat  signer5("Signer", 80);
		Bureaucrat	executor5("Executor", 50);
		Form	*formX = new	RobotomyRequestForm("Robotomized");
		std::cout << *formX;
		std::cout << formX->getTarget() << std::endl;
		std::cout << signer5 << std::endl;
		std::cout << executor5 << std::endl;
		signer5.decrement();
		executor5.executeForm(*formX);
		signer5.signForm(*formX);
		executor5.executeForm(*formX);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "////////////////////////////////" << std::endl;
	// PresidentialForm that does not get executed.
	try {
		Bureaucrat  signer6("Signer", 26);
		Bureaucrat	executor6("Executor", 6);
		Form	*formY = new	PresidentialPardonForm("Even Larbi can't pardon you");
		std::cout << *formY;
		std::cout << formY->getTarget() << std::endl;
		std::cout << signer6 << std::endl;
		std::cout << executor6 << std::endl;
		signer6.decrement();
		executor6.executeForm(*formY);
		signer6.signForm(*formY);
		executor6.executeForm(*formY);
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