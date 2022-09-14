/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:11:34 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 15:03:39 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(Bureaucrat &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& obj);
};

#endif