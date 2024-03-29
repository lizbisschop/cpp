/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 14:21:56 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/05 14:16:24 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap()
{
	std::cout << "(SuperTrap) Sweet life juice!" << std::endl;
    this->setName("unknown");
     this->setHitPoints(FragTrap::getHitPoints());
    this->setMaxHitPoints(FragTrap::getMaxHitPoints());
    this->setEnergyPoints(NinjaTrap::getEnergyPoints());
    this->setMaxHitPoints(NinjaTrap::getMaxHitPoints());
    this->setLevel(1);
    this->setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
    this->setRangedAttackDamage(FragTrap::getRangedAttackDamage());
    this->setArmorDamageReduction(FragTrap::getArmorDamageReduction());
    return ;
}

SuperTrap::SuperTrap(std::string n): FragTrap(), NinjaTrap()
{
	std::cout << "(SuperTrap) Sweet life juice!" << std::endl;
    this->setName(n);
    this->setHitPoints(FragTrap::getHitPoints());
    this->setMaxHitPoints(FragTrap::getMaxHitPoints());
    this->setEnergyPoints(NinjaTrap::getEnergyPoints());
    this->setMaxHitPoints(NinjaTrap::getMaxHitPoints());
    this->setLevel(1);
    this->setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
    this->setRangedAttackDamage(FragTrap::getRangedAttackDamage());
    this->setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & other)
{
	std::cout << "(SuperTrap) Sweet life juice!" << std::endl;
	*this = other;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "(SuperTrap) I'll die the way I lived: annoying!" << std::endl;
    return ;
}

SuperTrap const & SuperTrap::operator=(SuperTrap const &  rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);	
}

void	SuperTrap::meleeAttack(std::string target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string target)
{
	FragTrap::rangedAttack(target);
}