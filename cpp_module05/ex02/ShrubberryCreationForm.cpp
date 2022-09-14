/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:13 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 15:11:00 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &target) : Form("ShrubberyCreationForm", 145, 137) {
	
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
	*this = obj;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& obj) {
	(void )obj;
	return *this;
}