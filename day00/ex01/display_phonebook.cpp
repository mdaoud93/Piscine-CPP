/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_phonebook.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 00:26:12 by mdaoud            #+#    #+#             */
/*   Updated: 2020/06/16 02:49:54 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void	search_contact(Contact phonebook[], int contact_count)
{
	int		idx;
	Contact	person;

	std::cout << "Enter the index of the contact" << std::endl;
	std::cin >> idx;
	if (idx >= 0 && idx < contact_count)
	{
		person = phonebook[idx];
		std::cout << "Index: " << idx << std::endl;
		std::cout << "First Name: " << person.get_first_name() << std::endl;
		std::cout << "Last Name: " << person.get_last_name() << std::endl;
		std::cout << "Nickname: " << person.get_nickname() << std::endl;
		std::cout << "Login: " << person.get_login() << std::endl;
		std::cout << "Postal Address: " << person.get_postal_address() << std::endl;
		std::cout << "Email: " << person.get_email_address() << std::endl;
		std::cout << "Phone Number: " << person.get_phone_number() << std::endl;
		std::cout << "Birthday: " << person.get_birthday() << std::endl;
		std::cout << "Underwear Color: " << person.get_underwear_color() << std::endl;
		std::cout << "Favourite Meal: " << person.get_favourite_meal() << std::endl;
		std::cout << "Darkest Secret: " << person.get_darkest_secret() << std::endl;
	}
	else
	{
		std::cout << "Sorry, index not found" << std::endl;
	}
}

void		display_phonebook(Contact phone_book[], int contact_count)
{
	std::string		buffer;
	std::cout << "|" << std::setw(MAX_FIELD_W) << "Index";
	std::cout << "|" << std::setw(MAX_FIELD_W) << "First Name";
	std::cout << "|" << std::setw(MAX_FIELD_W) << "Last Name";
	std::cout << "|" << std::setw(MAX_FIELD_W) << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << "|" << std::setw(MAX_FIELD_W) << i;
		std::cout << "|" << std::setw(MAX_FIELD_W);
		buffer = phone_book[i].get_first_name();
		if (buffer.length() > MAX_FIELD_W)
		{
			buffer[MAX_FIELD_W - 1] = '.';
			buffer.erase(MAX_FIELD_W);
		}
		std::cout << buffer;
		std::cout << "|" << std::setw(MAX_FIELD_W);
		buffer = phone_book[i].get_last_name();
		if (buffer.length() > MAX_FIELD_W)
		{
			buffer[MAX_FIELD_W - 1] = '.';
			buffer.erase(MAX_FIELD_W);
		}
		std::cout << buffer;
		std::cout << "|" << std::setw(MAX_FIELD_W);
		buffer = phone_book[i].get_nickname();
		if (buffer.length() > MAX_FIELD_W)
		{
			buffer[MAX_FIELD_W - 1] = '.';
			buffer.erase(MAX_FIELD_W);
		}
		std::cout << buffer;
		std::cout << "|" << std::endl;
	}
	search_contact(phone_book, contact_count);
}