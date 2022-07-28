/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:12:56 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 14:31:48 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static string	get_value(string s) {
	string	res;
	cout << s << ": ";
	getline(cin, res);
	if (!cin.good())
	{
		cout << "Pressed CTRL+D\nExiting...";
		exit(0);
	}
	return (res);
}

void	PhoneBook::add_contact() {
	string	fname = get_value("first name");
	string	lname = get_value("last name");
	string	nickn = get_value("nickname");
	string	phonenum = get_value("phone number");
	string	darksec = get_value("darkest secret");
	Contact contact(fname, lname, nickn, phonenum, darksec);
	this->contacts[nbr_of_contacts++ % 8] = contact;
}

void	PhoneBook::get_contact(int index) {
	if (index > 7 || index >= this->nbr_of_contacts || index < 0) {
		cout << "IndexError: list index out of range\n";
		return ;
	}
	Contact	Contact = this->contacts[index];
	cout << "first name: " << Contact.getfname() + "\n";
	cout << "last name: " << Contact.getlname() + "\n";
	cout << "nickname: " << Contact.getnickn() + "\n";
	cout << "Phone number: " << Contact.getphnum() + "\n";
	cout << "Darkest secret: " << Contact.getdarksec() + "\n";
}
static void	output(string s)
{
	cout << s.substr(0, 10) << (s.length() > 10 ? "." : "");
}
void	PhoneBook::get_contacts_list() {
	for (int i = 0; i < 8 && i < this->nbr_of_contacts; i++) {
		Contact Contact = this->contacts[i];
		cout << i << "|";
		output(Contact.getfname());
		cout << "|";
		output(Contact.getlname());
		cout << "|";
		output(Contact.getnickn());
		cout << endl;
	}
	string	nbr;
	int		index;
	cout << "index: ";
	getline(cin, nbr);
	stringstream	ss;
	ss << nbr;
	if (!(ss >> index)) {
		cout << "input error\nExiting...\n";
		exit(0);
	}
	get_contact(index);
}