/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:27:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/03 17:40:06 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Pop pop!" << std::endl;
	setName("unkown");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	return ;
}

FragTrap::FragTrap(std::string n)
{
	std::cout << "Pop pop!" << std::endl;
	setName(n);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
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
	ClapTrap::operator=(rhs);
	return ;
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
		srand(time(NULL));
		std::cout << this->_name << " attacks " << target << " with "  << attacks[rand() % 5] << " causing 30 points of damage!" << std::endl;		
		this->_EnergPoints -= 25;
	}
	return ;
}
