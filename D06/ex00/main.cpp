/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:02:38 by liz           #+#    #+#                 */
/*   Updated: 2021/01/25 12:16:22 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdio>

int		check_number(std::string s)
{
	int d = 0;
	int f = 0;
	unsigned long i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (isdigit(s[i]))
	{
		d = 1;
		i++;
	}
	if (d == 1 && s[i] == '.')
	{
		f = 1;
		i++;
	}
	while (isdigit(s[i]) && f == 1)
		i++;
	if (f == 1 && s[i] == 'f')
		i++;
	if (i == s.length())
		return (1);
	return (0);
}

void	printInputChar(std::string input)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: '" << input[0] << "'"  << std::endl;
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(input[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << std::endl; 
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong ammount of arguments" << std::endl;
		return (1);
	}
	std::string s = argv[1];
	int		inf = 0;
	char	c = '\0';
	int		i;
	float	f;
	double	d;
	if (s.compare("-inff") == 0 || s.compare("+inff") == 0 || s.compare("nanf") == 0 || s.compare("-inf") == 0|| s.compare("+inf") == 0 || s.compare("nan") == 0)
		inf = 1;
	if (s.length() == 1 && !isdigit(s[0]))
	{
		printInputChar(s);
		return (0);
	}
	if (inf == 0 && c == '\0')
	{
		if (check_number(s) == 0)
		{
			std::cout << "Invalid input" << std::endl;
			return (1);
		}
	}
	long double num;
	sscanf(s.c_str(), "%Lf", &num);
	std::cout << std::fixed << std::setprecision(1);
	if (inf == 1)
		std::cout << "char: impossible" << std::endl;
	else
	{		
		if (num < std::numeric_limits<char>::min() || num > std::numeric_limits<char>::max() || !isprint(num))
			std::cout << "char: Non displayable" << std::endl;
		else
		{
			if (c == '\0')
				c = static_cast<char>(num);
			std::cout << "char: '" << c << "'" << std::endl;
		}
	}
	if (inf == 1 || num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
	{
		i = static_cast<int>(num);
		std::cout << "int: " << i << std::endl;
	}
	if ((num < -(__FLT_MAX__) || num > __FLT_MAX__) && inf == 0)
		std::cout << "float: impossible" << std::endl;
	else
	{		
		f = static_cast<float>(num);
		std::cout << "float: " << f << "f" << std::endl;
	}
	if ((num < -(__DBL_MAX__) || num > __DBL_MAX__) && inf == 0)
		std::cout << "double: impossible" << std::endl;
	else
	{		
		d = static_cast<double>(num);
		std::cout << "double: " << d << std::endl;
	}	
	return (0);
}
