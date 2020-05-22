/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:31:27 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/22 14:54:16 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class T>
void iter(T *t_array, unsigned int size, void (*f)(const T&))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		f(t_array[i]);
		i++;
	}
}

template <class T>
void	ft_print(const T& arg)
{
	std::cout << arg << std::endl;
}

template void ft_print<int>(const int& arg);

void	p_str_len(const std::string& str)
{
	std::cout << str << " len = " << str.length() << std::endl;
}

int	main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	std::string b[] = {"abc", "test", "a"};

	void(*ft_print_int)(const int&) = &ft_print;
	void(*ft_print_str)(const std::string&) = &ft_print;
	iter(a, 5, ft_print_int);
	iter(b, 3, ft_print_str);
	iter(b, 2, p_str_len);
	iter(a, 2, ft_print);
	iter(b, 2, ft_print);
	return (0);
}
