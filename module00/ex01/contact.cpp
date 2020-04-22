/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:24:57 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/22 17:50:40 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact()
{}

void Contact::set_index(int index)
{
	this->index = index;
}

void Contact::set_first_name()
{
	std::cout << "first name: ";
	std::getline(std::cin, this->first_name);
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

void Contact::set_last_name()
{
	std::cout << "last name: ";
	std::getline(std::cin, this->last_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

void Contact::set_nickname()
{
	std::cout << "nickname: ";
	std::getline(std::cin, this->nickname);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

void Contact::set_login()
{
	std::cout << "login: ";
	std::getline(std::cin, this->login);
}

void Contact::set_postal_address()
{
	std::cout << "postal address: ";
	std::getline(std::cin, this->postal_address);
}

void Contact::set_email_address()
{
	std::cout << "email address: ";
	std::getline(std::cin, this->email_address);
}

void Contact::set_phone_number()
{
	std::cout << "phone number: ";
	std::getline(std::cin, this->phone_number);
}

void Contact::set_birthday_date()
{
	std::cout << "birthday date: ";
	std::getline(std::cin, this->birthday_date);
}

void Contact::set_favorite_meal()
{
	std::cout << "favorite meal: ";
	std::getline(std::cin, this->favorite_meal);
}

void Contact::set_underwear_color()
{
	std::cout << "underwear color: ";
	std::getline(std::cin, this->underwear_color);
}

void Contact::set_darkest_secret()
{
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::show_contact_infos()
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
