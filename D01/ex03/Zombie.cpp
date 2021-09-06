/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:05 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 12:01:55 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << " Zombie constructor" << std::endl; 
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << " Zombie destructor" << std::endl; 
	return ;
}

void Zombie::setType(std::string type)
{
	this->_type = type;
	return ;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

std::string Zombie::announce(void)
{
	std::string names;
	std::string message;
	names = "<" + this->_name + "( " + this->_type + " )>";
	message = "I will come and eat your organs!! BRAINSSS!!";
	return (names + message);
}