/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:40:19 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/22 16:37:36 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
	public:
		Array()
		{
			std::cout << "Array default constructor" << std::endl;
			this->arr = new T[0];
			this->nb_elements = 0;
		};
		~Array()
		{
			std::cout << "Array destructor" << std::endl;
			delete [] this->arr;
		};
		Array(const Array& array)
		{
			unsigned int i;

			std::cout << "Array copy constructor" << std::endl;
			this->arr = new T[array.nb_elements];
			i = 0;
			while (i < array.nb_elements)
			{
				this->arr[i] = array.arr[i];
				i++;
			}
			this->nb_elements = array.nb_elements;
		};
		Array(unsigned int n)
		{
			unsigned int i;
			std::cout << "Array param constructor" << std::endl;
			this->arr = new T[n];
			i = 0;
			while (i < n)
			{
				this->arr[i] = n;
				i++;
			}
			this->nb_elements = n;
		};
		Array &operator=(const Array& array)
		{
			unsigned int i;

			std::cout << "Array op=" << std::endl;
			delete [] this->arr;
			this->arr = new T[array.nb_elements];
			i = 0;
			while (i < array.nb_elements)
			{
				this->arr[i] = array.arr[i];
				i++;
			}
			this->nb_elements = array.nb_elements;
			return (*this);
		};
		T &operator[](int i)
		{
			if (i < 0)
				throw Array::OutOfLimit();
			else if (i >= (int)this->nb_elements)
				throw Array::OutOfLimit();
			return (this->arr[i]);
		};
		const T &operator[](int i) const
		{
			if (i < 0)
				throw Array::OutOfLimit();
			else if (i >= (int)this->nb_elements)
				throw Array::OutOfLimit();
			return (this->arr[i]);
		};
		unsigned int size() const
		{
			return (this->nb_elements);
		};

	private:
		T *arr;
		unsigned int nb_elements;
		class OutOfLimit: public std::exception
		{
			public:
				OutOfLimit()
				{
					std::cout << "OutOfLimit default constructor" << std::endl;
				};
				~OutOfLimit() throw()
				{
					std::cout << "OutOfLimit destructor" << std::endl;
				};
				OutOfLimit(const OutOfLimit& out)
				{
					(void)out;
					std::cout << "OutOfLimit copy constructor" << std::endl;
					*this = out;
				};
				OutOfLimit &operator=(const OutOfLimit& out)
				{
					(void)out;
					std::cout << "OutOfLimit op=" << std::endl;
					return (*this);
				};
				const char *what() const throw()
				{
					return ("Error Out Of Limit");
				};
		};
};

#endif
