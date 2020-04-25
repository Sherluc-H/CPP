/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 20:08:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 20:09:00 by lhuang           ###   ########.fr       */
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
		bool operator>(const Fixed& fixed);
		bool operator<(const Fixed& fixed);
		bool operator>=(const Fixed& fixed);
		bool operator<=(const Fixed& fixed);
		bool operator==(const Fixed& fixed);
		bool operator!=(const Fixed& fixed);
		Fixed operator+(const Fixed& fixed);
		Fixed operator-(const Fixed& fixed);
		Fixed operator*(const Fixed& fixed);
		Fixed operator/(const Fixed& fixed);
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int i);
		Fixed operator--(int i);
		static Fixed &min(Fixed& fixed1, Fixed& fixed2);
		static Fixed &max(Fixed& fixed1, Fixed& fixed2);
		static const Fixed &min(const Fixed& fixed1, const Fixed& fixed2);
		static const Fixed &max(const Fixed& fixed1, const Fixed& fixed2);

	private:
		int			value;
		static const int	nb_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
