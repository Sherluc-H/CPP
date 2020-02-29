/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 13:58:33 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/10 15:26:35 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <ctime>

class Contact
{
	public:
	Contact();
	void set_index(int index);
	void set_first_name();
	std::string get_first_name();
	void set_last_name();
	std::string get_last_name();
	void set_nickname();
	std::string get_nickname();
	void set_login();
	void set_postal_address();
	void set_email_address();
	void set_phone_number();
	void set_birthday_date();
	void set_favorite_meal();
	void set_underwear_color();
	void set_darkest_secret();
	void show_contact_infos();
	private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif
