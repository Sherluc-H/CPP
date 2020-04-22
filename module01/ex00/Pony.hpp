/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:23:24 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 00:58:21 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:
		Pony(void);
		~Pony(void);
		void ponyOnTheStack(void);
		void ponyOnTheHeap(void);

	private:
		std::string description;
		std::string type;
		void describe(void);

};

#endif
