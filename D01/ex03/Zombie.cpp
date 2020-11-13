/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:05 by liz           #+#    #+#                 */
/*   Updated: 2020/11/12 12:35:41 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n)
{
	this->_type = t;
	this->_name = n;
	return;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
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