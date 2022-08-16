/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:35:31 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 15:29:02 by acmaghou         ###   ########.fr       */
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
		Fixed&	operator= (const Fixed &obj);
		float	operator<< (const Fixed &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};


#endif