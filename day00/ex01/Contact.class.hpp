/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 23:50:19 by mdaoud            #+#    #+#             */
/*   Updated: 2020/06/16 02:55:41 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
 # define CONTACT_CLASS_HPP

# include <string.h>
# include <iostream>
# include <iomanip>

const int	MAX_CONTACT	=	8;
const int	MAX_FIELD_W	=	10;

class	Contact
{
public:
	Contact(void);
	~Contact(void);

	void				set_first_name(std::string str);
	void				set_last_name(std::string str);
	void				set_nickname(std::string str);
	void				set_login(std::string str);
	void				set_postal_address(std::string str);
	void				set_email_address(std::string str);
	void				set_phone_number(std::string str);
	void				set_birthday(std::string str);
	void				set_favourite_meal(std::string str);
	void				set_underwear_color(std::string str);
	void				set_darkest_secret(std::string str);

	std::string			get_first_name(void);
	std::string			get_last_name(void);
	std::string			get_nickname(void);
	std::string			get_login(void);
	std::string			get_postal_address(void);
	std::string			get_email_address(void);
	std::string			get_phone_number(void);
	std::string			get_birthday(void);
	std::string			get_favourite_meal(void);
	std::string			get_underwear_color(void);
	std::string			get_darkest_secret(void);

	
private:
	std:: string		first_name;
	std:: string		last_name;
	std:: string		nickname;
	std:: string		login;
	std:: string		postal_address;
	std:: string		email_address;
	std:: string		phone_number;
	std:: string		birthday;
	std:: string		favourite_meal;
	std:: string		underwear_color;
	std:: string		darkest_secret;
};

void		display_phonebook(Contact phonebook[], int contact_count);
void		add_contact(Contact phonebook[], int contact_idx);

#endif