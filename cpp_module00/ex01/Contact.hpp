/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:32:19 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 11:16:12 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <cstring>
using namespace	std;

class Contact
{
	private:
		string	_firstname;
		string	_lastname;
		string	_nickname;
		string	_phonenumber;
		string	_darkestsecret;
	public:
		Contact();
		Contact(string fname, string lname, string nickn, string phnum, string darksec);
		string getfname();
		string getlname();
		string getnickn();
		string getphnum();
		string getdarksec();
};


#endif