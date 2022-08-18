/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:15:09 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/18 13:00:27 by acmaghou         ###   ########.fr       */
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
	this->store = roundf(y * myPow(2, this->fractBits));
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

//----------Operator Overloading---------
Fixed&	Fixed::operator= (const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->store = obj.store;
	return *this;
}

std::ostream&	operator<< (std::ostream& out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

Fixed&	Fixed::operator+ (const Fixed &obj) {
	this->store += obj.store;
	return *this;
}

Fixed&	Fixed::operator- (const Fixed &obj) {
	this->store -= obj.store;
	return *this;
}

Fixed&	Fixed::operator* (const Fixed &obj) {
	this->store *= obj.store;
	return *this;
}

Fixed&	Fixed::operator/ (const Fixed &obj) {
	this->store /= obj.store;
	return *this;
}

bool	operator> (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() > obj2.getRawBits();
}

bool			operator< (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() < obj2.getRawBits();
}

bool			operator>= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() >= obj2.getRawBits();
}

bool			operator<= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() <= obj2.getRawBits();
}

bool			operator== (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() == obj2.getRawBits();
}

bool			operator!= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.getRawBits() != obj2.getRawBits();
}

//---------post-increment/decrement------

Fixed		Fixed::operator++ (int) {
	Fixed tmp(*this);
	this->store++;
	return tmp;
}

Fixed		Fixed::operator-- (int) {
	Fixed	tmp(*this);
	this->store--;
	return	tmp;
}

//--------pre-increment/decrement--------

Fixed&		Fixed::operator-- () {
	this->store--;
	return *this;
}

Fixed&		Fixed::operator++ () {
	this->store++;
	return *this;
}

//-----------min-fixed-point--------------

Fixed&		Fixed::min(Fixed &x, Fixed &y) {
	if (x > y)
		return y;
	else
		return x;
}

const Fixed&	min(const Fixed &x, const Fixed &y) {
	if (x > y)
		return y;
	else
		return x;
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
	return ((float) this->store) / myPow(2, this->fractBits);
}

//----------toInt Function----------------

int		Fixed::toInt( void ) const {
	return	this->store >> this->fractBits;
}

//----------myPow Function----------------

int	myPow(int nb, int power)
{
	int	res = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}