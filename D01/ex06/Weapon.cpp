/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 11:43:42 by liz           #+#    #+#                 */
/*   Updated: 2020/11/28 15:25:48 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): _type(t)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const& Weapon::getType(void)
{
	std::string const& ref = this->_type; 
	return (ref);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
	return ;
}