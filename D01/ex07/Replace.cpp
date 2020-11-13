/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 13:09:54 by liz           #+#    #+#                 */
/*   Updated: 2020/11/12 11:36:05 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int error(std::ifstream *input_file, std::ofstream *output_file, std::string error)
{
	(*input_file).close();
	(*output_file).close();
	std::cout << error;
	return (-1);
}

int main(int argc, char **argv)
{
	std::string s1, s2;
	std::string buffer;
	size_t start, found;
	std::ifstream input_file;
	std::ofstream output_file;

	if (argc != 4)
		return(error(&input_file, &output_file, "Not the right amount of arguments\n"));
	s1 = argv[2];
	s2 = argv[3];
	if (s1.length() == 0 || s2.length() == 0)
		return (error(&input_file, &output_file, "String doesn't excist\n"));
	input_file.open(argv[1]);
	output_file.open(strcat(argv[1], ".replace"));
	if (!(input_file.is_open()) || !(output_file.is_open()))
		return (error(&input_file, &output_file, "Unable to open file\n"));
	while (getline(input_file, buffer))
	{
		found = 0;
		start = 0;
		while (found != std::string::npos)
		{
			found = buffer.find(s1, start);
			if (found != std::string::npos)
			{
				output_file << buffer.substr(start, found - start) << std::endl;
				output_file << s2;
				start = found + s1.length();
			}
			else
				output_file << buffer.substr(start, buffer.length() - start) << std::endl;
		}
	}
	output_file.close();
	input_file.close();
	return (0);
		
}