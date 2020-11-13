/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:05 by liz           #+#    #+#                 */
/*   Updated: 2020/10/10 11:45:22 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n)
{
	this->_type = t;
	this->_name = n;
	return;
}

Zombie::~Zombie(void)
{
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