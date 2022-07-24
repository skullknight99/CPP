/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:44:14 by acmaghou          #+#    #+#             */
/*   Updated: 2022/07/24 14:34:25 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static	string	get_val(string s)
{
	string	res;
	cout << s << ": ";
	getline(cin, res);
	if (!cin.good())
	{
		cout <<"Pressed CTRL + D\nExiting ...\n";
		exit(0);
	}
	return (res);
}

void	PhoneBook::add_contact() {
	string	fname = get_val("first name");
	string	lname = get_val("last name");
	string	nickn = get_val("nickname");
	string	phnum = get_val("Phone number");
	string	darksec = get_val("Darkest secret");
	Contact	contact(fname, lname, nickn, phnum, darksec);
	this->contacts[nbr_of_contacts++ % 8] = contact;
}

void	PhoneBook::get_contact(int index)
{
	if (index > 7 || index >= this->nbr_of_contacts || index < 0)
	{
		cout << "Index Error\n";
		return ;
	}
	Contact	contact = this->contacts[index];
	cout << "first name: " << contact.getfname() + "\n";
	cout << "last name: " << contact.getlname() + "\n";
	cout << "nickname: " << contact.getnickn() + "\n";
	cout << "phone number: " << contact.getphnum() + "\n";
	cout << "darkest secret: " << contact.getdarksec() + "\n";
}

static	void	output(string s)
{
	cout << s.substr(0, 10) << (s.length() > 10 ? "." : "");
}

void	PhoneBook::get_contact_list() {
	for (int i = 0; i < 8 && i < nbr_of_contacts; i++)
	{
		Contact contact = this->contacts[i];
		cout << i << "|";
		output(contact.getfname());
		cout << "|";
		output(contact.getlname());
		cout << "|";
		output(contact.getnickn());
		cout << endl;
	}
	string	nbr;
	int		index;
	cout << "index: ";
	getline(cin, nbr);
	stringstream	ss;
	ss << nbr;
	if (!(ss >> index))
	{
		cout << "Input Error\nExiting...\n";
		exit(0);
	}
	get_contact(index);
}

