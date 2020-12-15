/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 10:51:23 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 12:08:13 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const & name): _name(name), _AP(40)
{
	return ;
}

Character::Character(Character const & rhs)
{
	*this = rhs;
	return ;
}

Character const & Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	return (*this); 
}

Character::~Character(void)
{
	return ;
}


std::string    Character::getName(void) const
{
	return (this->_name);
}

void    Character::recoverAP(void)
{
	if (this->_AP + 10 > 40)
		this->_AP = 40;
	else
		this->_AP += 10;
}

void    Character::equip(AWeapon *)
{
}

void	Character::attack(Enemy*)
{
	std::cout << this->_name << " attacks " << getType() << " with a " << this->_weapon._name << std::endl;
	this->_AP -+ AWeapon::getAPCost();
	this->_weapon->attack();
	Enemy::setHitpoints(this->weapon->getDamage);
	if (Enemy::getHP() <= 0)
		delete Enemy;
}