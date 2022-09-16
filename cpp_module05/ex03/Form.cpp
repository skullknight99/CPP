/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:12:12 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/16 15:45:23 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), signGrade(0), execGrade(0) {
	sign = false;
}

Form::Form(std::string name, int sg, int eg) : name(name), signGrade(sg), execGrade(eg) {
	if (signGrade > 150 || execGrade > 150)
		throw	Bureaucrat::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw	Bureaucrat::GradeTooHighException();
	sign = false;
}

Form::Form(const Form& obj) : name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade) {
	*this = obj;
}

std::ostream&	operator<< (std::ostream& out, const Form &obj) {
	out << "Form Name: " << obj.getName() << std::endl
	<< "Status: " << (obj.getSign() ? "yes" : "no") << std::endl
	<< "Required grade to sign: " << obj.getSignGrade() << std::endl
	<< "Required grade to execute: " << obj.getExecGrade() << std::endl;
	return	out;
}

Form&	Form::operator= (const Form& obj) {
	if (signGrade > 150 || execGrade > 150)
		throw	Bureaucrat::GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw	Bureaucrat::GradeTooHighException();
	this->sign = obj.sign;
	return *this;
}

Form::~Form() {
}

std::string Form::getName() const {
	return name;
}

bool	Form::getSign() const {
	return sign;
}

int		Form::getSignGrade() const {
	return	signGrade;
}

int		Form::getExecGrade() const {
	return	execGrade;
}

void	Form::beSigned(Bureaucrat &x) {
	if (x.getGrade() > this->getSignGrade())
		throw	Bureaucrat::GradeTooLowException();
	this->sign = true;	
}

void	Form::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() > this->getExecGrade())
		throw	Bureaucrat::GradeTooLowException();
	if (!getSign())
		std::cout << "Could not execute the form cause it needs to be signed first" << std::endl;
	else
		this->action();
}