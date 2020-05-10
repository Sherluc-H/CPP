/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:35:25 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/10 00:02:57 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		virtual ~Victim();
		Victim(const Victim& v);
		Victim(std::string name);
		Victim &operator=(const Victim& v);
		std::string getName();
		virtual void getPolymorphed() const;

	protected:
		Victim();
		std::string name;
};

std::ostream &operator<<(std::ostream& os, Victim& v);

#endif
