/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 19:54:02 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 19:54:04 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int i);
		Fixed(const float f);
		Fixed &operator=(const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

	private:
		int			value;
		static const int	nb_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
