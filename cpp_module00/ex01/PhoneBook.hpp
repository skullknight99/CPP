/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:56:57 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/23 18:50:02 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Contact;

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		nbr_of_contacts;
		void	get_contact(int index);
	public:
		PhoneBook();
		void	add_contact();
		void	get_contacts_list();
};

#endif