#include <iostream>
#include <string>

template <class T, class F>
void iter(T *t_array, unsigned int size, F f(T))
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
void	ft_print(T arg)
{
	std::cout << arg << std::endl;
}

void	p_str_len(std::string str)
{
	std::cout << str << " len = " << str.length() << std::endl;
}

int	main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	std::string b[] = {"abc", "test", "a"};

	void(*ft_print_int)(int) = &ft_print;
	void(*ft_print_str)(std::string) = &ft_print;
	iter(a, 5, ft_print_int);
	iter(b, 3, ft_print_str);
	iter(b, 2, p_str_len);
	return (0);
}
