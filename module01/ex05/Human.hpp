/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:53:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/13 16:02:23 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>
# include <sstream>

class Human
{
	public:
		Human();
		~Human();
		std::string identify(void);
		const Brain& getBrain(void);
	private:
		//const Brain brain;
		const Brain *brain;
};

#endif
