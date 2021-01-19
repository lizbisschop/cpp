/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:42:36 by liz           #+#    #+#                 */
/*   Updated: 2021/01/05 14:13:38 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "(Ninja) Can I just say... yeehaw" << std::endl;
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
	std::cout << "(Ninja) Can I just say... yeehaw" << std::endl;
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
	std::cout << "(Ninja) Can I just say... yeehaw" << std::endl;
	*this = other;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "(Ninja) This is why I was build" << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	NinjaTrap::NinjaShoebox(ClapTrap const &clap)
{
	std::cout << "ClapTrap shoebox" << std::endl;
	(void)clap;
}

void	NinjaTrap::NinjaShoebox(FragTrap const &frag)
{
	std::cout << "FragTrap shoebox" << std::endl;
	(void)frag;
}

void	NinjaTrap::NinjaShoebox(ScavTrap const &scav)
{
	std::cout << "ScavTrap shoebox" << std::endl;
	(void)scav;
}

void	NinjaTrap::NinjaShoebox(NinjaTrap const &ninja)
{
	std::cout << "NinjaTrap shoebox" << std::endl;
	(void)ninja;
}
