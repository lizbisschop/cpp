/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 11:43:42 by liz           #+#    #+#                 */
/*   Updated: 2020/10/18 15:19:18 by liz           ########   odam.nl         */
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

std::string Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string str)
{
	this->_type = str;
	return ;
}