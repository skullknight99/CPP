/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:13:37 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/16 17:38:50 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------Constructor--------------
Fixed::Fixed()
{
	this->store = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	this->store = x << this->fractBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float y)
{
	this->store = roundf(y * pow(2, this->fractBits));
	std::cout << "Float constructor called" << std::endl;
}

//---------------Destructor---------------
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//-------------Copy Constructor-----------
Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

//----------Copy Assignment Overload------
Fixed&	Fixed::operator= (const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = obj.store;
	return *this;
}

//----------Bitwise Operator Overload-----
std::ostream&	operator<< (std::ostream& out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
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

//----------toFloat Function--------------

float	Fixed::toFloat( void ) const {
	return ((float) this->store) / pow(2, this->fractBits);
}

//----------toInt Function----------------

int		Fixed::toInt( void ) const {
	return	this->store >> this->fractBits;
}