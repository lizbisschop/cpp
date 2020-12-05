/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:27:33 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/04 11:52:43 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "(Frag) Pop pop!" << std::endl;
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
	std::cout << "(Frag) Pop pop!" << std::endl;
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
	std::cout << "(Frag) Pop pop!" << std::endl;
	*this = other;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "(Frag) Dangit, I'm out!" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = {"Funzerker", "MinionTrap", "LaserInferno", "meatUnicyle", "ruberDucky"};

	if (getEnergyPoints() < 25)
	{
		std::cout << "Not enough energy please rest before attack" << std::endl;
		return ;
	}
	else
	{
		srand(time(NULL));
		std::cout << getName() << " attacks " << target << " with "  << attacks[rand() % 5] << " causing 30 points of damage!" << std::endl;		
		setEnergyPoints(getEnergyPoints() - 25);
	}
	return ;
}
