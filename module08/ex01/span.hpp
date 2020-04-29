/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:40:47 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/28 23:40:50 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	public:
		~Span();
		Span(const Span& span);
		Span(unsigned int n);
		Span &operator=(const Span& span);
		void addNumber(int nb);
		int shortestSpan(void);
		int longestSpan(void);

	private:
		Span();
		std::vector<int> vec;
		int index;

};

#endif
