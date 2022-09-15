/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:52:06 by acmaghou          #+#    #+#             */
/*   Updated: 2022/09/15 18:20:06 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
#define INTERN_HPP

class Intern
{
	public:
		Intern();
		Intern(const Intern &obj);
		~Intern();
		Intern&	operator= (const Intern &obj);
		Form*	makeForm(std::string name, std::string target);
};


#endif