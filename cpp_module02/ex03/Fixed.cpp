/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:32:53 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/20 09:49:03 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------Constructor--------------
Fixed::Fixed()
{
	this->store = 0;
}
Fixed::Fixed(const int x)
{
	this->store = x << this->fractBits;
}

Fixed::Fixed(const float y)
{
	this->store = roundf(y * myPow(2, this->fractBits));
}

//---------------Destructor---------------
Fixed::~Fixed() {
}

//-------------Copy Constructor-----------
Fixed::Fixed(const Fixed &obj) {
	*this = obj;
}

//----------Operator Overloading---------
Fixed&	Fixed::operator= (const Fixed& obj)
{
	this->store = obj.store;
	return *this;
}

std::ostream&	operator<< (std::ostream& out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

Fixed	operator+ (const Fixed &x, const Fixed &y) {
	float	ov;
	ov = x.toFloat() + y.toFloat();
	Fixed	c(ov);
	return c;
}

Fixed	operator- (const Fixed &x, const Fixed &y) {
	float	ov;
	ov = x.toFloat() - y.toFloat();
	Fixed	c(ov);
	return c;
}

Fixed	operator* (const Fixed &x, const Fixed &y) {
	float	ov;
	ov = x.toFloat() * y.toFloat();
	Fixed	c(ov);
	return c;
}

Fixed	operator/ (const Fixed &x, const Fixed &y) {
	float	ov;
	ov = x.toFloat() / y.toFloat();
	Fixed	c(ov);
	return c;
}

bool	operator> (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() > obj2.toFloat();
}

bool			operator< (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() < obj2.toFloat();
}

bool			operator>= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() >= obj2.toFloat();
}

bool			operator<= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() <= obj2.toFloat();
}

bool			operator== (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() == obj2.toFloat();
}

bool			operator!= (const Fixed &obj1, const Fixed &obj2) {
	return obj1.toFloat() != obj2.toFloat();
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
	return x;
}

const Fixed&	min(const Fixed &x, const Fixed &y) {
	if (x > y)
		return y;
	return x;
}

//----------max-fixed-point-------------

Fixed&		Fixed::max(Fixed &x, Fixed &y) {
	if (x > y)
		return x;
	return y; 
}

const Fixed&	Fixed::max(const Fixed &x, const Fixed &y) {
	if (x > y)
		return x;
	return y;
}

//-----------Getter Function--------------
int	Fixed::getRawBits( void ) const {
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