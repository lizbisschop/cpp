/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 11:43:42 by liz           #+#    #+#                 */
/*   Updated: 2020/12/06 11:37:33 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): _type(t)
{
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const & Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string t)
{
	this->_type = t;
	return ;
}
