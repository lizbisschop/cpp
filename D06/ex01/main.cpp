/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:49:53 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 11:02:15 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>
#include <cstring>

struct Data { 
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	void *ret = new char[52];
	const char *alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	std::string s1;
	std::string s2;
	int			n;
	int			index;
	for (int i = 0; i < 16; i++)
	{
		index = rand() % 62;
		if (i < 8)
			s1.push_back(alphanum[index]);
		else
			s2.push_back(alphanum[index]);
	}
	n = rand() % std::numeric_limits<int>::max();
	memcpy(ret, &s1, 24);
	memcpy(reinterpret_cast<char *>(ret) + 24, &n, 4);
	memcpy(reinterpret_cast<char *>(ret) + 24 + 4, &s2, 24);
	std::cout << s1 << std::endl << s2 << std::endl << n << std::endl;	
	return (reinterpret_cast<void *>(ret));
}

Data * deserialize(void * raw)
{
	Data *data = new Data;
	
	data->s1 = *(reinterpret_cast<std::string *>(raw));
	data->n = *(reinterpret_cast<int *>(raw) + 6);
	char *s2_ptr = reinterpret_cast<char *>(raw) + 24 + 4;
	data->s2 = std::string(*(reinterpret_cast<std::string *>(s2_ptr)));
	std::cout << "Testing deserialize" << std::endl;
	std::cout << data->s1 << std::endl << data->s2 << std::endl << data->n << std::endl;
	return (data);
}

int	main(void)
{
	srand(time(NULL));
	Data *data;
	void *raw;
	raw = serialize();
	data = deserialize(raw);
	delete data;
	delete static_cast<char *>(raw);
	return (0);
}