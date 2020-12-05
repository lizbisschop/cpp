/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:58:34 by liz           #+#    #+#                 */
/*   Updated: 2020/12/04 11:34:45 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "(Scav) Ha-ha" << std::endl;
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
	std::cout << "(Scav) Ha-ha" << std::endl;
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
	std::cout << "(Scav) Ha-ha" << std::endl;
	*this = other;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "(Scav) Crit-i-call!" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[] = {"Twist and shout", "Break a leg", "Drag the monster", "Kill the spider", "eat the cake"};
	std::cout << getName() << " challenges " << target << " to " << challenges[rand() % 5] << std::endl;
}