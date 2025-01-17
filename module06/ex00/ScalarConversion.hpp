/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:30:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/28 16:31:18 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

class ScalarConversion
{
	public:
		~ScalarConversion();
		ScalarConversion(const ScalarConversion& sc);
		ScalarConversion(int nb_int);
		ScalarConversion(float nb_float);
		ScalarConversion(double nb_double);
		ScalarConversion &operator=(const ScalarConversion& sc);
		void display();

	private:
		ScalarConversion();
		char nb_char;
		int nb_int;
		float nb_float;
		double nb_double;
		
};

#endif
