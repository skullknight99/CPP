/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:58:47 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 11:15:25 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->_firstname = "";
	this->_lastname = "";
	this->_nickname = "";
	this->_phonenumber = "";
	this->_darkestsecret = "";
}

Contact::Contact(string fname, string lname, string nickn, string phnum, string darksec) {
	this->_firstname = fname;
	this->_lastname = lname;
	this->_nickname = nickn;
	this->_phonenumber = phnum;
	this->_darkestsecret = darksec;
}

string	Contact::getfname() {
	return this->_firstname;
}

string	Contact::getlname() {
	return this->_lastname;
}

string	Contact::getnickn() {
	return this->_nickname;
}

string	Contact::getphnum() {
	return this->_phonenumber;
}

string	Contact::getdarksec() {
	return this->_darkestsecret;
}