#include <iostream>
#include <stdlib.h>
#include <time.h>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

char getRandomChar(void)
{
	int i;
	char c;

	c  = 0;
	while (c == 0)
	{
		i = rand() % 75 + 48;
		if ((i >= '0' && i <= '9') || (i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
			c = i;
	}
	return (c);
}

void getRandomArray(char *s)
{
	int i;

	i = 0;
	while (i < 8)
	{
		s[i] = getRandomChar();
		std::cout << s[i] << std::endl;
		i++;
	}
}

void* serialize(void)
{
	unsigned char *data = new unsigned char[20];
	char s1[8];
	int n;
	char s2[8];
	int i;
	int j;

	i = 0;
	getRandomArray(s1);
	while (i < 8)
	{
		data[i] = s1[i];
		//std::cout << s1[i] << std::endl;
		i++;
	}
	n = rand() % 1000;
	std::cout << n << std::endl;
	j = 0;
	while (i < 12)
	{
		data[i] = ((unsigned char*)(&n))[j];
		//std::cout << (int)data[i] << std::endl;
		i++;
		j++;
	}
	getRandomArray(s2);
	j = 0;
	while (i < 20)
	{
		data[i] = s2[j];
		//std::cout << data[i] << std::endl;
		i++;
		j++;
	}
	return (data);
}

Data* deserialize(void * raw)
{
	Data *data = new Data;
	char s1[8];
	int n;
	char s2[8];
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		s1[i] = ((char*)raw)[i];
		i++;
	}
	data->s1 = std::string(s1, 8);
	j = 0;
	while (i < 12)
	{
		((unsigned char*)&n)[j] = ((unsigned char*)raw)[i];
		i++;
		j++;
	}
	data->n = n;
	j = 0;
	while (i < 20)
	{
		s2[j] = ((char*)raw)[i];
		i++;
		j++;
	}
	data->s2 = std::string(s2, 8);
	return (data);
}

int	main()
{
	srand(time(NULL));
	void *raw;
	Data *data;
	raw = serialize();
	//std::cout << data->s1 << std::endl;
	data = deserialize(raw);
	std::cout << "end: s1 = " << data->s1 << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
	delete (unsigned char*)raw;
	delete data;
	return (0);
}
