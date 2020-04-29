/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 00:28:32 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/29 02:37:45 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack()
		{
			std::cout << "MutantStack default constructor" << std::endl;
			this->nb = 0;
		};
		~MutantStack()
		{
			std::cout << "MutantStack destructor" << std::endl;
		};
		MutantStack(const MutantStack& mutantstack)
		{
			std::cout << "MutantStack copy constructor" << std::endl;
			*this = mutantstack;
		};
		MutantStack &operator=(const MutantStack& mutantstack)
		{
			int i;

			std::cout << "MutantStack op=" << std::endl;
			if(this->nb > 0)
			{
				while (this->nb > 0)
					this->pop();
			}
			i = 0;
			while (i < mutantstack.nb)
			{
				this->push(*(&(mutantstack.top()) - mutantstack.nb + 1 + i));
				i++;
			}
			this->nb = mutantstack.nb;
			return (*this);
		};
		class MutantStackIterator
		{
			public:
				MutantStackIterator(MutantStack& mutantstack, bool is_start): mutantstack(mutantstack), is_start(is_start)
				{
					std::cout << "MutantStackIt param constructor" << std::endl;
					this->crement = 0;
				};
				~MutantStackIterator()
				{
					std::cout << "MutantStackIt destructor" << std::endl;
				};
				MutantStackIterator(const MutantStackIterator& msit): mutantstack(msit.mutantstack)
				{
					std::cout << "MutantStackIt copy constructor" << std::endl;
					*this = msit;
				};
				MutantStackIterator &operator=(const MutantStackIterator& msit)
				{
					std::cout << "MutantStackIt op=" << std::endl;
					this->mutantstack = msit.mutantstack;
					this->is_start = msit.is_start;
					this->crement = msit.crement;
					return (*this);
				}
				T &get_value_ref()
				{
					if (this->is_start)
						return (*(&(this->mutantstack.top()) - this->mutantstack.nb + 1 + this->crement));
					return (*(&(this->mutantstack.top()) + 1 + this->crement));
				}
				T &operator*()
				{
					return (get_value_ref());
				};
				T &operator++()
				{
					this->crement = this->crement + 1;
					return (get_value_ref());
				};
				T &operator--()
				{
					this->crement = this->crement - 1;
					return (get_value_ref());
				};
				bool operator!=(MutantStackIterator& msit)
				{
					if (this->get_value_ref() == msit.get_value_ref())
						return (false);
					return (true);
				}
			private:
				MutantStackIterator()
				{
					std::cout << "MutantStackIt default constructor" << std::endl;
				}
				MutantStack &mutantstack;
				bool is_start;
				int crement;
		};
		typedef MutantStackIterator iterator;
		iterator begin()
		{
			return (iterator(*this, true));
		};
		iterator end()
		{
			return (iterator(*this, false));
		};
		void push(T value)
		{
			std::stack<T>::push(value);
			this->nb = this->nb + 1;
		}
		void pop()
		{
			std::stack<T>::pop();
			this->nb = this->nb - 1;
		}
	private:
		int	nb;

};

#endif
