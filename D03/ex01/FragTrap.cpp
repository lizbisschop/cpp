/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:27:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 13:41:43 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int rndm = 0;

FragTrap::FragTrap(void): _name("no name"),
	_HitPoints(100),
	_MaxHitPoints(100),
	_EnergPoints(100),
	_MaxEnergyPoints(100),
	_Level(1),
	_MeleeAttackDamage(30),
	_RangedAttackDamage(20),
	_ArmorDamageReduction(5)
	{
	std::cout << "Pop pop!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string n): _name(n),
	_HitPoints(100),
	_MaxHitPoints(100),
	_EnergPoints(100),
	_MaxEnergyPoints(100),
	_Level(1),
	_MeleeAttackDamage(30),
	_RangedAttackDamage(20),
	_ArmorDamageReduction(5)
	{
	std::cout << "Pop pop!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & other)
{
	std::cout << "Pop pop!" << std::endl;

	*this = other;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Dangit, I'm out!" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	_name = rhs._name;
	_HitPoints = rhs._HitPoints;
	_EnergPoints = rhs._EnergPoints;
	_MaxEnergyPoints = rhs._MaxEnergyPoints;
	_Level = rhs._Level;
	_MeleeAttackDamage = rhs._MeleeAttackDamage;
	_RangedAttackDamage = rhs._RangedAttackDamage;
	_ArmorDamageReduction = rhs._ArmorDamageReduction;
	return (*this); 
}

void    FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "(FragTrap) " << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "(FragTrap) " << this->_name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage!" << std::endl;	
}

void    FragTrap::takeDamage(unsigned int ammount)
{
	int hit = ammount - this->_ArmorDamageReduction;
	if (this->_HitPoints - hit < 0)
		this->_HitPoints = 0;
	else
		this->_HitPoints -= hit;
	std::cout << this->_name << " has been attacked with " << ammount << " and still has " << this->_HitPoints << " hitpoints" << std::endl;
}

void    FragTrap::beRepaired(unsigned int ammount)
{
	if (this->_HitPoints + (int)ammount > _MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	else
		this->_HitPoints += (int)ammount;
	std::cout << this->_name << " has gained " << ammount << " and now has " << this->_HitPoints << " hitpoints" << std::endl;		
}
void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = {"Funzerker", "MinionTrap", "LaserInferno", "meatUnicyle", "ruberDucky"};

	if (this->_EnergPoints < 25)
	{
		std::cout << "Not enough energy please rest before attack" << std::endl;
		return ;
	}
	else
	{
		if (rndm == 0)
		{
			srand(time(NULL));
			rndm = 1;
		}
		std::cout << this->_name << " attacks " << target << " with "  << attacks[rand() % 5] << " causing 30 points of damage!" << std::endl;		
		this->_EnergPoints -= 25;
	}
	return ;
}
