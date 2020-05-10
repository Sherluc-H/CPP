/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 20:05:27 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/10 02:26:58 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		virtual ~Squad();
		Squad(const Squad & sq);
		Squad &operator=(const Squad & sq);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
		
	private:
		ISpaceMarine**	unit;
		int		nb_of_squads;
		
};

#endif
