/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:12:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 10:38:30 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
	private:
		std::string const	name;
		bool				sign;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		Form(std::string name, int sg, int eg);
		Form(const Form &obj);
		Form&	operator= (const Form& obj);
		~Form();
		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat &x);
};

std::ostream&	operator<<(std::ostream &out, const Form& obj);