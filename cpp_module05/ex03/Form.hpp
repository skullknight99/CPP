/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:12:10 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/16 12:13:41 by acmaghou         ###   ########.fr       */
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
		Form&				operator= (const Form& obj);
		virtual				~Form();
		std::string			getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat &x);
		virtual void		action() const = 0;
		virtual std::string	getTarget() = 0;
		void				execute(Bureaucrat const& executor) const;
		virtual Form*				newForm(std::string target) = 0;
};

std::ostream&				operator<<(std::ostream &out, const Form& obj);