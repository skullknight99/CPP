/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:52:06 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/16 12:34:52 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Intern
{
	private:
		Form	*names[3];
	public:
		Intern();
		Intern(const Intern &obj);
		~Intern();
		Intern&	operator= (const Intern &obj);
		Form*	makeForm(std::string name, std::string target);
		class WrongName : public	std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Wrong Form name given as argument!");
				}
		};
};


#endif