/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:31:14 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 11:36:23 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

#include "Contact.hpp"

class	Contact;

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		nbr_of_contacts;
		void	get_contact(int index);
	public:
		PhoneBook();
		void	add_contact();
		void	get_contact_list();
};


#endif