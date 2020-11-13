/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 11:17:58 by liz           #+#    #+#                 */
/*   Updated: 2020/10/02 11:30:34 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *pointer = &brain;
	std::string &reference = brain;
	
	std::cout << "pointer = " << *pointer << std::endl;
	std::cout << "reference = " << reference << std::endl;
	
}