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
/*
		MutantStack(const MutantStack& mutantstack)
		{
			std::cout << "MutantStack copy constructor" << std::endl;
			*this = mutantstack;
		};
		MutantStack &operator=(const MutantStack& mutantstack)
		{
			std::cout << "MutantStack op=" << std::endl;
			this->nb = mutantstack.nb;
			return (*this);
		};
*/
		class MutantStackIterator
		{
			public:
				MutantStackIterator()
				{
					std::cout << "MutantStackIt default constructor" << std::endl;
				}
				MutantStackIterator(MutantStack& mutantstack, bool is_start): mutantstack(mutantstack), is_start(is_start)
				{
					std::cout << "MutantStackIt param constructor" << std::endl;
					this->crement = 0;
				};
				~MutantStackIterator()
				{
					std::cout << "MutantStackIt destructor" << std::endl;
				};
				T &get_value_ref()
				{
					if (this->is_start)
						return (*(&(this->mutantstack.top()) - this->mutantstack.nb + 1 + this->crement));
					return (*(&(this->mutantstack.top()) + 1 + this->crement));
				}
				T &operator*()
				{
					std::cout << "a" << this->is_start << std::endl;
					std::cout << "b" << this->mutantstack.nb << std::endl;
					std::cout << "c" << this->crement << std::endl;
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
				bool operator!=(MutantStackIterator& a)
				{
					std::cout << "comp" << std::endl;
					if (this->get_value_ref() == a.get_value_ref())
						return (false);
					std::cout << "t" << std::endl;
					return (true);
				}
			private:
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
			std::cout << "push " << value << std::endl;
			this->nb = this->nb + 1;
		}
		void pop()
		{
			std::stack<T>::pop();
			std::cout << "pop " << std::endl;
			this->nb = this->nb - 1;
		}
	private:
		int	nb;

};

#endif
