/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 23:56:08 by mdaoud            #+#    #+#             */
/*   Updated: 2020/06/16 02:54:02 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void		clearscreen(void)
{
	std::cout << "\033[2J\033[1;1H";
}
static void		phone_menu(void)
{
	std::cout << "List of valid commands:" << std::endl;
	std::cout << "EXIT\t->\tquite the program (at the risk of destroying EVERYTHING!!)" << std::endl;
	std::cout << "ADD\t->\tAdd a contact the phone book (Remember, 8 contacts maximum!)" << std::endl;
	std::cout << "SEARCH\t->\tDisplay the phonebook" << std::endl;
	std::cout << "CLEAR\t->\tClear the screen" << std::endl;
}


int				main(void)
{
	int				contact_num = 0;
	std::string		command;
	Contact			phonebook[MAX_CONTACT];

	std::cout << "Hello and welcome the phone book that can hold only 8 contacts!!" << std::endl;
	while (1)
	{
		phone_menu();
		std::cin >> command;
		if (command == "EXIT")
		{
			std::cout << "Goodbye, FORVER!!" << std::endl;
			break ;
		}
		else if (command == "ADD")
		{
			if (contact_num == MAX_CONTACT)
			{
				std::cout << "Sorry, the phonebook has reached its limits" << std::endl;
				continue ;
			}
			add_contact(phonebook, contact_num);
			std::cout << "Contact successfully added!" << std::endl;
			contact_num++;
		}
		else if (command == "SEARCH")
			display_phonebook(phonebook, contact_num);
		else if (command == "CLEAR")
			clearscreen();
	}

	return (0);
}