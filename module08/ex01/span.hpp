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
