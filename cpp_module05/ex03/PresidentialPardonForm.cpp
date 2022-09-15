/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:20 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/15 12:56:56 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  : Form() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {
	*this = obj;
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& obj) {
	this->target = obj.target;
	return *this;
}

std::string				PresidentialPardonForm::getTarget() {
	return	this->target;
}

void					PresidentialPardonForm::action() const {
	std::cout << this->target << " has pardoned Zaphod Beeblebrox." << std::endl;
}
