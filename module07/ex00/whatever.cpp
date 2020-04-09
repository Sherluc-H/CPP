#include <iostream>
#include <string>

template <class T>
void	swap(T &arg1, T &arg2)
{
	T tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <class T>
T	&min(T &arg1, T &arg2)
{
	if (arg1 < arg2)
		return (arg1);
	return (arg2);
}

template <class T>
T	&max(T &arg1, T &arg2)
{
	if (arg1 > arg2)
		return (arg1);
	return (arg2);
}

int	main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	int e = 42;
	int f = 42;
	int &g = ::min( e, f );
	int &h = ::max( f, e );

	std::cout << "e address = " << &e << "| f address = " << &f << std::endl;
	std::cout << "min( e, f ) | g address = " << &g << ", g value = " << g << std::endl;
	std::cout << "max( f, e ) | h address = " << &h << ", h value = " << h << std::endl;
	return 0;
}
