/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 13:09:54 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 12:37:13 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int		error(std::ofstream *output, std::ifstream *input, std::string err)
{
	std::cout << err << std::endl;
	(*output).close();
	(*input).close();
	return (-1);
}

int 	main(int argc, char **argv)
{
	std::string s1, s2;
	std::string buffer;
	std::ofstream output;
	std::ifstream input;
	size_t start, found;

	if (argc != 4)
		return (error(&output, &input, "Not the right amount of arguments"));
	s1 = argv[2];
	s2 = argv[3];
	if (s1.length() == 0 || s2.length() == 0)
		return (error(&output, &input, "please enter a existing string"));
	input.open(argv[1]);
	output.open(strcat(argv[1], ".replace"));
	if (!(input.is_open()) || !(output.is_open()))
		return (error(&output, &input, "files are not open"));		
	while (getline(input, buffer))
	{
		start = 0;
		found = 0;
		while (found != std::string::npos)
		{
			found = buffer.find(s1, start);
			if (found != std::string::npos)
			{
				output << buffer.substr(start, found - start);
				output << s2;
				start = found + s1.length();
			}
			else
				output << buffer.substr(start, buffer.length() - start) << std::endl;
		}
	}
	output.close();
	input.close();
	return (0);
}