/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:58:34 by liz           #+#    #+#                 */
/*   Updated: 2021/01/04 15:42:57 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): _name("unknown"),
	_HitPoints(100),
	_MaxHitPoints(100),
	_EnergPoints(50),
	_MaxEnergyPoints(50),
	_Level(1),
	_MeleeAttackDamage(20),
	_RangedAttackDamage(15),
	_ArmorDamageReduction(3)
{
	std::cout << "Ha-ha" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string n): _name(n),
	_HitPoints(100),
	_MaxHitPoints(100),
	_EnergPoints(50),
	_MaxEnergyPoints(50),
	_Level(1),
	_MeleeAttackDamage(20),
	_RangedAttackDamage(15),
	_ArmorDamageReduction(3)
{
	std::cout << "Ha-ha" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & other)
{
	std::cout << "Ha-ha" << std::endl;
	*this = other;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Crit-i-call!" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void    ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "(ScavTrap)" << this->_name << " attacks " << target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage!" << std::endl;	
}

void    ScavTrap::takeDamage(unsigned int ammount)
{
	int hit = ammount - this->_ArmorDamageReduction;
	if (this->_HitPoints - hit < 0)
		this->_HitPoints = 0;
	else
		this->_HitPoints -= hit;
	std::cout <<  "(ScavTrap)" << this->_name << " has been attacked with " << ammount << " and still has " << this->_HitPoints << " hitpoints" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int ammount)
{
	if (this->_HitPoints + (int)ammount > _MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	else
		this->_HitPoints += (int)ammount;
	std::cout << this->_name << " has gained " << ammount << " and now has " << this->_HitPoints << " hitpoints" << std::endl;		
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[] = {"Twist and shout", "Break a leg", "Drag the monster", "Kill the spider", "eat the cake"};
	std::cout << this->_name << " challenges " << target << " to " << challenges[rand() % 5] << std::endl;
}