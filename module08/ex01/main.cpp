#include <iostream>
#include "span.hpp"

int	main(void)
{
	Span s(5);
	s.addNumber(5);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	return (0);
}
