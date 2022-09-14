/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:20 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 14:59:35 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &target) : Form("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) {
	*this = obj;
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& obj) {
	(void )obj;
	return *this;
}

