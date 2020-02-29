/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:24:51 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/10 15:26:01 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "contact.hpp"

void	ft_format_column(std::string info)
{
	int i;

	i = 0;
	if (info.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << info;
	}
	else
	{
		while (i < 9)
		{
			std::cout << info[i];
			i++;
		}
		std::cout << ".";
	}
}

void	ft_add(Contact *contact, int index)
{
	contact[index].set_index(index);
	contact[index].set_first_name();
	contact[index].set_last_name();
	contact[index].set_nickname();
	contact[index].set_login();
	contact[index].set_postal_address();
	contact[index].set_email_address();
	contact[index].set_phone_number();
	contact[index].set_birthday_date();
	contact[index].set_favorite_meal();
	contact[index].set_underwear_color();
	contact[index].set_darkest_secret();
}

void	ft_show_all_contact(Contact *contact, int index)
{
	int i;

	i = 0;
	ft_format_column("index");
	std::cout << "|";
	ft_format_column("prenom");
	std::cout << "|";
	ft_format_column("nom de famille");
	std::cout << "|";
	ft_format_column("pseudo");
	std::cout << std::endl;
	while (i < index)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		ft_format_column(contact[i].get_first_name());
		std::cout << "|";
		ft_format_column(contact[i].get_last_name());
		std::cout << "|";
		ft_format_column(contact[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
}

void	ft_show_contact(Contact *contact, int index)
{
	std::string index_detail;

	if (index > 0)
	{
		ft_show_all_contact(contact, index);
		std::cout << "enter an number as index to see detail" << std::endl;
		std::getline(std::cin, index_detail);
		while (index_detail.length() > 1 || index_detail[0] < '0' || index_detail[0] > '9')
		{	
			std::getline(std::cin, index_detail);
		}
		if (index_detail[0] >= '0' && index_detail[0] < index + 48) 
		{
			contact[index_detail[0] - 48].show_contact_infos();
		}
		else
			std::cout << "error index not found" << std::endl;
	}
	else
		std::cout << "no contact yet" << std::endl;
}



int	main(void)
{
	Contact contact[8];	
	std::string input("\0");
	int index;

	index = 0;
	while (input.compare("EXIT") != 0)
	{
		std::cout << "Please enter a command [ADD|SEARCH|EXIT]" << std::endl;
		std::cin >> input;
		std::cin.clear();
		if (input.compare("ADD") == 0 && index < 8)
		{
			ft_add(contact, index);
			index++;
		}
		else if (input.compare("ADD") == 0)
			std::cout << "PhoneBook full" << std::endl;
		else if (input.compare("SEARCH") == 0)
			ft_show_contact(contact, index);
	}
	return (0);
}
