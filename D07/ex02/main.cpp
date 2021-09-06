/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 10:14:35 by liz           #+#    #+#                 */
/*   Updated: 2021/01/29 11:22:52 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> empty;
	try {
		std::cout << empty;
		std::cout << empty[9];
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	Array<std::string> str(5);
	try{
		str[0] = "hihihi";
		str[1] = "hahaha";
		str[2] = "nooooo";
		str[3] = "hello";
		str[4] = "whats up";
		str[5] = " yoooo";
	}
	catch(std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << str;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	Array<int> integer(3);
	try {
		integer[0] = 1;
		integer[1] = 4;
		integer[2] = 8;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << integer;
	Array<int> integer2(3);
	integer2 = integer;
	std::cout << integer2;
	Array<float> floats(3);
	try {
		floats[0] = 20.67f;
		floats[1] = 0.57f;
		floats[2] = 9.87f;
		floats[3] = 10.90f;
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << floats;
	return (0);
}