/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:53:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 01:31:17 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include "Brain.hpp"

class Human
{
	public:
		Human();
		std::string identify(void) const;
		const Brain& getBrain(void);
	private:
		const Brain brain;
};

#endif
