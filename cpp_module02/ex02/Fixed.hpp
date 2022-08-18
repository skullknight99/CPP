/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:15:12 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/18 17:15:00 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					store;
		static const int	fractBits = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float y);
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed&			operator= (const Fixed &obj);
		Fixed&			operator++ ();
		Fixed&			operator-- ();
		Fixed			operator++ (int);
		Fixed			operator-- (int);
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		static Fixed&			min(Fixed &x, Fixed &y);
		static Fixed&			max(Fixed &x, Fixed &y);
		static const Fixed&	min(const Fixed &x, const Fixed &y);
		static const Fixed&	max(const Fixed &x, const Fixed &y);
};

bool			operator> (const Fixed &obj1, const Fixed &obj2);
Fixed			operator* (const Fixed &x, const Fixed &y);
Fixed			operator+ (const Fixed &x, const Fixed &y);
Fixed			operator- (const Fixed &x, const Fixed &y);
Fixed			operator/ (const Fixed &x, const Fixed &y);
bool			operator< (const Fixed &obj1, const Fixed &obj2);
bool			operator>= (const Fixed &obj1, const Fixed &obj2);
bool			operator<= (const Fixed &obj1, const Fixed &obj2);
bool			operator== (const Fixed &obj1, const Fixed &obj2);
bool			operator!= (const Fixed &obj1, const Fixed &obj2);
std::ostream&	operator<< (std::ostream& out, const Fixed &obj);
int				myPow(int nb, int power);

#endif