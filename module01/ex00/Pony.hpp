/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:23:24 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 15:47:02 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	public:
		Pony(void);
		~Pony(void);
		void ponyOnTheStack(void);
		void ponyOnTheHeap(void);
		//void drawPony(void);

	private:
		std::string pony;
		void drawPony(void);

};

#endif
