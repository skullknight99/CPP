/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:06:55 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 12:54:14 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------Constructor--------------
Fixed::Fixed()
{
	this->store = 0;
	std::cout << "Default constructor called" << std::endl;
}

//---------------Destructor---------------
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//-------------Copy Constructor-----------
Fixed::Fixed(Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

//----------Copy Assignment Overload------
Fixed&	Fixed::operator= (Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = obj.getRawBits();
	return *this;
}

//-----------Getter Function--------------
int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->store);
}

//-----------Setter Function--------------
void	Fixed::setRawBits(int const raw) {
	this->store = raw;
}