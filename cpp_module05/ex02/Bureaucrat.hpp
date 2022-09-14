/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:48:18 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/14 10:49:30 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	Form;
class Bureaucrat
{
	private:
		std::string	const	name;
		int					grade;
		static const int	max = 1;
		static const int	min = 150;
		void				checkGrade();
	public:
		Bureaucrat();
		Bureaucrat(std::string n, int g);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		signForm(Form &f);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade too high!");
				}
		};
		class	GradeTooLowException : public	std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Grade too low!");
				}
		};
};

std::ostream&	operator<< (std::ostream& out, const Bureaucrat &obj);
#endif