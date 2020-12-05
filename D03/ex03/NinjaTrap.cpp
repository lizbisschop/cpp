/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:42:36 by liz           #+#    #+#                 */
/*   Updated: 2020/12/04 12:00:08 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "(Ninja)" << std::endl;
	setName("unkown");
	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
	return ;
}

NinjaTrap::NinjaTrap(std::string n)
{
	std::cout << "(Ninja)" << std::endl;
	setName(n);
	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & other)
{
	std::cout << "(Ninja)" << std::endl;
	*this = other;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	NinjaTrap::NinjaShoebox(ClapTrap const &clap)
{
	
}

void	NinjaTrap::NinjaShoebox(FragTrap const &frag)
{
	
}

void	NinjaTrap::NinjaShoebox(ScavTrap const &scav)
{
	
}

void	NinjaTrap::NinjaShoebox(NinjaTrap const &ninja)
{
	
}
