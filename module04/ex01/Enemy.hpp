/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:53:46 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 16:07:39 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
	private:
		Enemy();
		Enemy(const Enemy& en);
		Enemy &operator=(const Enemy& en);

	protected:
		int hp;
		std::string type;

	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string const & getType() const;
		int getHP() const;

		virtual void takeDamage(int);

};

#endif
