/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 19:50:07 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/25 19:50:09 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed &operator=(const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int			value;
		static const int	nb_bits = 8;
};

#endif
