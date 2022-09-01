/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:45:07 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/01 17:49:52 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstring>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &b);
		Brain(std::string ideas);
		Brain&	operator= (const Brain &b);
		~Brain();
		std::string const	*getIdeas() const;
		void	setIdeas(std::string ideas);
};


#endif