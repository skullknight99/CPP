/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:23:14 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 08:17:44 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>
using namespace	std;

class Contact
{
	private:
		string	_firstname;
		string	_lastname;
		string	_nickname;
		string	_phone_number;
		string	_darkest_secret;
	public:
		Contact();
		Contact(string fname, string lname, string nickn, string phnum, string darksec);
		string	getfname();
		string	getlname();
		string	getnickn();
		string	getphnum();
		string	getdarksec();
};


#endif