/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:06:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 11:42:39 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->store = 0;
}

void	Fixed::setRawBits(int const raw) {
	this->store = raw;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	store = obj.store;
}

Fixed&	Fixed::operator= (const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	store = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->store);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}