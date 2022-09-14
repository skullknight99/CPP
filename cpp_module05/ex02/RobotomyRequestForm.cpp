/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:17 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 15:02:42 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat &target) : Form("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) {
	*this = obj;
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& obj) {
	(void )obj;
	return *this;
}