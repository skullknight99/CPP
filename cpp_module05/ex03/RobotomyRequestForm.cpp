/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:17 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/15 17:17:27 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()  : Form() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) {
	*this = obj;
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& obj) {
	this->target = obj.target;
	return *this;
}

std::string				RobotomyRequestForm::getTarget() {
	return this->target;
}
void					RobotomyRequestForm::action() const {
	srand((long) this);
	int	random = rand();
	std::cout << "VRRRVVRVRVRRRRRRRRVRVRRVRVRVRVR" << std::endl;
	if (random % 2 == 0) {
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "Robotomy failed" << std::endl;
}