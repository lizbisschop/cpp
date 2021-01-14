/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 15:30:35 by liz           #+#    #+#                 */
/*   Updated: 2021/01/04 17:33:31 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "(Clap) Place your bets!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & other)
{
	std::cout << "(Clap) Place your bets!" << std::endl;
	*this = other;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "(Clap) Don't cryo!" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void    ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_MeleeAttackDamage << " points of damage!" << std::endl;	
}

void    ClapTrap::takeDamage(unsigned int ammount)
{
	int hit = ammount - this->_ArmorDamageReduction;
	if (this->_HitPoints - hit < 0)
		this->_HitPoints = 0;
	else
		this->_HitPoints -= hit;
	std::cout << this->_name << " has been attacked with " << ammount << " and still has " << this->_HitPoints << " hitpoints" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int ammount)
{
	if (this->_HitPoints + (int)ammount > _MaxHitPoints)
		this->_HitPoints = this->_MaxHitPoints;
	else
		this->_HitPoints += (int)ammount;
	std::cout << this->_name << " has gained " << ammount << " and now has " << this->_HitPoints << " hitpoints" << std::endl;		
}

//getters and setters

void	ClapTrap::setName(std::string n)
{
	this->_name = n;
	return ;
}

void	ClapTrap::setHitPoints(int HP)
{
	this->_HitPoints = HP;
	return ;
}

void	ClapTrap::setMaxHitPoints(int MHP)
{
	this->_HitPoints = MHP;
	return ;	
}

void	ClapTrap::setEnergyPoints(int EP)
{
	this->_EnergPoints = EP;
	return ;
}

void	ClapTrap::setMaxEnergyPoints(int MEP)
{
	this->_MaxEnergyPoints = MEP;
	return ;
}

void	ClapTrap::setLevel(int level)
{
	this->_Level = level;
	return ;	
}

void	ClapTrap::setMeleeAttackDamage(int MAD)
{
	this->_MeleeAttackDamage = MAD;
	return ;
}

void	ClapTrap::setRangedAttackDamage(int RAD)
{
	this->_RangedAttackDamage = RAD;
	return ;
}

void	ClapTrap::setArmorDamageReduction(int ADA)
{
	this->_ArmorDamageReduction = ADA;
	return ;
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void)
{
	return (this->_HitPoints);
}

int	ClapTrap::getMaxHitPoints(void)
{
	return (this->_HitPoints);
}

int	ClapTrap::getEnergyPoints(void)
{
	return (this->_EnergPoints);
}

int	ClapTrap::getMaxEnergyPoints(void)
{
	return (this->_MaxEnergyPoints);
}

int	ClapTrap::getLevel(void)
{
	return (this->_Level);	
}

int	ClapTrap::getMeleeAttackDamage(void)
{
	return (this->_MeleeAttackDamage);
}

int	ClapTrap::getRangedAttackDamage(void)
{
	return (this->_RangedAttackDamage);
}

int	ClapTrap::getArmorDamageReduction(void)
{
	return (this->_ArmorDamageReduction);	
}
