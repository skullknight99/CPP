/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:06:58 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/15 12:43:30 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					store;
		static const int	fractBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &obj);
		Fixed&	operator= (Fixed &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};


#endif