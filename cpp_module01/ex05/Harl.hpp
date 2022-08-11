/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:16:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/10 11:50:03 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		/* data */
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Harl(/* args */);
		~Harl();
		void	complain(std::string level);
};


#endif