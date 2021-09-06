/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 15:54:05 by liz           #+#    #+#                 */
/*   Updated: 2020/12/05 14:00:45 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string t, std::string n): _type(t), _name(n)
{
	std::cout << "zombie constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "zombie destructor called" << std::endl;
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