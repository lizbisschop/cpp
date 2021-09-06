/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 13:51:44 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 17:44:43 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::string string_array[4] = {"hoi", "hey", "hallo", "joehoe"};
	int			int_array[4] = {1, 2, 3, 4};
	const char char_array[4] = {'a', 'b', 'c', 'd'};
	
	iter(string_array, 4, print_array);
	iter(int_array, 4, print_array);
	iter(char_array, 4, print_array);
	return (0);
}