/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:06:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 12:44:29 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->store = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator= (Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->store);
}

void	Fixed::setRawBits(int const raw) {
	this->store = raw;
}