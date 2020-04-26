/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:04:28 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 14:06:50 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
		~Sorcerer();
		Sorcerer(const Sorcerer& s);
		Sorcerer(std::string name, std::string title);
		Sorcerer &operator=(const Sorcerer& s);
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &) const;

	private:
		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream& os, const Sorcerer& s);

#endif
