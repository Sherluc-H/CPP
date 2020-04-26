/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:38:10 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 23:43:38 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
		std::string type;
		unsigned int _xp;

	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& am);
		AMateria &operator=(const AMateria& am);
		virtual ~AMateria();

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
