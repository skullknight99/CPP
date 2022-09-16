/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:53:27 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/16 12:46:35 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	this->names[0] = new	ShrubberyCreationForm();
	this->names[1] = new	RobotomyRequestForm();
	this->names[2] = new	PresidentialPardonForm();
}

Intern::Intern(const Intern &obj) {
	*this = obj;
}

Intern::~Intern() {
	for (int i = 0; i < 3; i++)
		delete	names[i];
}

Intern&	Intern::operator= (const Intern &obj) {
	(void)obj;
	return *this;
}

Form*	Intern::makeForm(std::string name, std::string target) {
	std::string	forms[3] = {"shrubbery creation", "robotomy request" , "presidential pardon"};
	int i = -1;
	while (i++ < 3 && forms[i] != name);
	return  i < 3 ? names[i]->newForm(target) : throw	Intern::WrongName();
}