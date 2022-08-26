/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:31:37 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/25 17:41:38 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
}

ScavTrap::ScavTrap(const ScavTrap &st) {
	*this = st;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap &st) {
	return *this;
}
