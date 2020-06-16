/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 00:06:44 by mdaoud            #+#    #+#             */
/*   Updated: 2020/06/16 03:21:09 by mdaoud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/*
** Constructor / Destructor
*/

Contact::Contact(void){
	return ;
}
Contact::~Contact(void){
	return ;
}

/*
** Setters
*/

void			Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void			Contact::set_last_name(std::string str)
{
	this->last_name = str;
}
void			Contact::set_nickname(std::string str)
{
	this->nickname = str;
}
void			Contact::set_login(std::string str)
{
	this->login = str;
}
void			Contact::set_postal_address(std::string str)
{
	this->postal_address = str;
}
void			Contact::set_email_address(std::string str)
{
	this->email_address = str;
}
void			Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}
void			Contact::set_birthday(std::string str)
{
	this->birthday = str;
}
void			Contact::set_favourite_meal(std::string str)
{
	this->favourite_meal = str;
}
void			Contact::set_underwear_color(std::string str)
{
	this->underwear_color = str;
}
void			Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

/*
** Getters
*/

std::string		Contact::get_first_name(void)
{
	return (this->first_name);
}
std::string		Contact::get_last_name(void)
{
	return (this->last_name);
}
std::string		Contact::get_nickname(void)
{
	return (this->nickname);
}
std::string		Contact::get_login(void)
{
	return (this->login);
}
std::string		Contact::get_postal_address(void)
{
	return (this->postal_address);
}
std::string		Contact::get_email_address(void)
{
	return (this->email_address);
}
std::string		Contact::get_phone_number(void)
{
	return (this->phone_number);
}
std::string		Contact::get_birthday(void)
{
	return (this->birthday);
}
std::string		Contact::get_favourite_meal(void)
{
	return (this->favourite_meal);
}
std::string		Contact::get_underwear_color(void)
{
	return (this->underwear_color);
}
std::string		Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}