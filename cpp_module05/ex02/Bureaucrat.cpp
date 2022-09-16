/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:48:12 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/16 15:44:55 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0){
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n){
	this->grade = g;
	checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name) {
	*this = obj;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& obj) {
	if (obj.grade < max)
		throw	GradeTooHighException();
	else if (obj.grade > min)
		throw	GradeTooLowException();
	this->grade = obj.grade;
	return *this;
}

std::string Bureaucrat::getName() const {
	return	(this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

void	Bureaucrat::increment() {
	this->grade--;
	checkGrade();
}

void	Bureaucrat::decrement() {
	this->grade++;
	checkGrade();
}

void	Bureaucrat::signForm(Form &f) {
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
		
	}
}

void	Bureaucrat::executeForm(Form const& form) {
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't execute " << form.getName() << " because " << e.what() << '\n';
	}
}

std::ostream&	operator<< (std::ostream &out, const Bureaucrat &obj) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}

Bureaucrat::~Bureaucrat() {
}

void	Bureaucrat::checkGrade() {
	if (this->grade < this->max)
		throw	GradeTooHighException();
	else if (this->grade > this->min)
		throw	GradeTooLowException();
}