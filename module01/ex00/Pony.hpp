/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:23:24 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/30 20:49:40 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:
		Pony();
		~Pony();
		void describe(void);

	private:
		std::string description;

};

#endif
