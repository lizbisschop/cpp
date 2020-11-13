/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 15:38:17 by liz           #+#    #+#                 */
/*   Updated: 2020/10/18 15:51:07 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n): _name(n)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void 	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}