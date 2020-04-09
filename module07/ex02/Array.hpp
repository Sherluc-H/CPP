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
				throw std::out_of_range("index < 0 not allowed");
			else if (i >= (int)this->nb_elements)
				throw std::out_of_range("index above number of elements");
			return (this->arr[i]);
		};
		unsigned int size()
		{
			return (this->nb_elements);
		};

	private:
		T *arr;
		unsigned int nb_elements;
};

#endif
