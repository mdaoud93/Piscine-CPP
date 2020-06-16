/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 00:05:35 by mdaoud            #+#    #+#             */
/*   Updated: 2020/06/16 00:43:57 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void		add_contact(Contact phonebook[], int idx)
{
	Contact			person;
	std::string		str;

	std::cout << "First Name: ";
	std::cin >> str;
	person.set_first_name(str);

	std::cout << "Last Name: ";
	std::cin >> str;
	person.set_last_name(str);

	std::cout << "Nickname: ";
	std::cin >> str;
	person.set_nickname(str);
	
	std::cout << "Login: ";
	std::cin >> str;
	person.set_login(str);

	std::cout << "Postal Address: ";
	std::cin >> str;
	person.set_postal_address(str);

	std::cout << "Email Address: ";
	std::cin >> str;
	person.set_email_address(str);

	std::cout << "Phone Number: ";
	std::cin >> str;
	person.set_phone_number(str);

	std::cout << "Birthday: ";
	std::cin >> str;
	person.set_birthday(str);

	std::cout << "Favourite Meal:";
	std::cin >> str;
	person.set_favourite_meal(str);

	std::cout << "Underwear Color: ";
	std::cin >> str;
	person.set_underwear_color(str);

	std::cout << "Darkest Secret: ";
	std::cin >> str;
	person.set_darkest_secret(str);

	phonebook[idx] = person;
}