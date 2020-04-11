#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <array>

template <class T>
typename T::iterator	easyfind(T &container, int to_find)
{
	return (std::find(container.begin(), container.end(), to_find));
}

#endif
