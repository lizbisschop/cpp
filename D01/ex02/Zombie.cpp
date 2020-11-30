/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:05 by liz           #+#    #+#                 */
/*   Updated: 2020/11/30 15:30:18 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n): _type(t), _name(n)
{
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