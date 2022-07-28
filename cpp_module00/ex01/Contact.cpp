/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:11:53 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/23 17:08:54 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {
	this->_firstname = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contact::Contact(string fname, string lname, string nickn, string phnum, string darksec) {
	this->_firstname = fname;
	this->_lastname = lname;
	this->_nickname = nickn;
	this->_phone_number = phnum;
	this->_darkest_secret = darksec;
}

string	Contact::getfname() {
	return this->_firstname;
}

string Contact::getlname() {
	return this->_lastname;
}

string Contact::getnickn() {
	return this->_nickname;
}

string Contact::getphnum() {
	return this->_phone_number;
}

string Contact::getdarksec() {
	return this->_darkest_secret;
}
