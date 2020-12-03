/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:58:34 by liz           #+#    #+#                 */
/*   Updated: 2020/12/03 17:17:33 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Ha-ha" << std::endl;
	setName("Unknown");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
	return;
}

ScavTrap::ScavTrap(std::string n)
{	
	std::cout << "Ha-ha" << std::endl;
	setName(n);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
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

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[] = {"Twist and shout", "Break a leg", "Drag the monster", "Kill the spider", "eat the cake"};
	std::cout << this->_name << " challenges " << target << " to " << challenges[rand() % 5] << std::endl;
}