/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:40:47 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 14:44:12 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>

class Span
{
	public:
		~Span();
		Span(const Span& span);
		Span(unsigned int n);
		Span &operator=(const Span& span);
		void addNumber(int nb);
		void addNRandNumber(unsigned int n, int min, int max);
		template <class InputIterator>
		void addFromIterator(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				if (this->index >= this->vec.size())
					throw (Span::SpanException("Span container full"));
				this->vec.at(this->index) = *first;
				this->index = this->index + 1;
				first++;
			}
		}
		int shortestSpan(void);
		int longestSpan(void);

	private:
		Span();
		std::vector<int> vec;
		unsigned int index;
		class SpanException: public std::exception
		{
			public:
				SpanException();
				~SpanException() throw();
				SpanException(std::string msg);
				SpanException(const SpanException& se);
				SpanException &operator=(const SpanException& se);
				const char *what() const throw();
			private:
				std::string msg;
		};
};

#endif
