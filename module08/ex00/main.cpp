#include <iostream>
#include <vector>
#include <array>
#include "easyfind.hpp"

int	main(void)
{
	std::array<int, 2> arr = {1, 2};
	std::array<int, 2>::iterator i = easyfind(arr, 1);
	if (i != arr.end())
		std::cout << *(++i) << std::endl;
	else
		std::cout << "not found " << *i << "|" << *(arr.end())<< std::endl;
	std::array<int, 2>::iterator i2 = std::find(arr.begin(), arr.end(), 1);
	if (i2 != arr.end())
		std::cout << *(++i2) << std::endl;
	else
		std::cout << "not found " << *i2 << "|" << *(arr.end()) << std::endl;
	std::cout << arr[1] << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(0);
	vec.push_back(3);
	std::vector<int>::iterator ev = easyfind(vec, 0);
	(void)ev;
	std::vector<int>::iterator iv = std::find(vec.begin(), vec.end(), 0);
	(void)iv;
	if (ev != vec.end())
		std::cout << *(ev) << "|" << *(vec.end()) << std::endl;
	if (iv != vec.end())
		std::cout << *(iv) << "|" << *(vec.end()) << std::endl;
	std::cout << *(easyfind(vec, 3)) << std::endl;
	std::cout << *(std::find(vec.begin(), vec.end(), 3)) << std::endl;
	return (0);
}
