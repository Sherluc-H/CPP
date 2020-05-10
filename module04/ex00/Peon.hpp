/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 14:04:08 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/10 00:19:37 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		virtual ~Peon();
		Peon(const Peon& p);
		Peon(std::string name);
		Peon &operator=(const Peon& p);
		void getPolymorphed() const;

	private:
		Peon();
};

#endif
