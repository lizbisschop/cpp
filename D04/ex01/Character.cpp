/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 10:51:23 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/20 14:32:14 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const & name): _name(name), _AP(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const & rhs)
{
	*this = rhs;
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;
	return (*this); 
}

Character::~Character(void)
{
	return ;
}

int				Character::getAP(void) const
{
	return (this->_AP);
}

AWeapon	*		Character::getWeapon(void) const
{
	return (this->_weapon);
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

void    Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (this->_weapon == NULL)
		return ;
	if (this->_AP < this->_weapon->getAPCost())
	{
		std::cout << "Not enough AP" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_AP -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream & operator<<(std::ostream  &stream, Character const & rhs)
{
	if (rhs.getWeapon() != NULL)
		stream << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		stream << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (stream);
}