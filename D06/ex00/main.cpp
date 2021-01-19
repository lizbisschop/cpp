/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 15:12:42 by liz           #+#    #+#                 */
/*   Updated: 2021/01/14 16:23:02 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>

void	printInputChar(std::string input)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: '" << input[0] << "'"  << std::endl;
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(input[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << std::endl; 
}

// int		checkInput(std::string input)
// {
// 	if (isdigit(input[0]) == 0 && input.length() > 1)
// 		return (0);
// 	else if (isdigit(input[0]) == 1)
// 	{
// 		for (int i = 0; i < input.length(); i++)
// 		{
// 			if ()
// 		}
// 	}
// }

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Not the right amount of arguments" << std::endl;		
		return (0);
	}
	char kind;

	kind = 'c';
	if (kind = 'c')
	std::string input = argv[1];
	printInputChar(input);
	// if (checkInput(input) == 1)
	// 	convert(argv[1]);
	// else
	// 	std::cout << "input is not valid" << std::endl;
}
