/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalars.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:16:36 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/17 14:48:35 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALARS_HPP
#define	SCALARS_HPP

#include <iostream>
#include <string>
#include <typeinfo>

class Scalars
{
	private:
		
	public:
		Scalars();
		Scalars(const Scalars& obj);
		Scalars&	operator= (const Scalars& obj);
		~Scalars();
};


#endif