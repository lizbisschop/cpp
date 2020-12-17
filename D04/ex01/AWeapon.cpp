/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:31:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 11:27:54 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage)
{
    return ;
}

AWeapon::AWeapon(void)
{
    return ;
}

AWeapon::AWeapon(AWeapon const & rhs)
{
    *this = rhs;
    return ;
}

AWeapon::~AWeapon(void)
{
    return ;
}

AWeapon const & AWeapon::operator=(AWeapon const & rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}

int     AWeapon::getAPCost(void) const
{
    return (this->_apcost);
}

int     AWeapon::getDamage(void) const
{
    return (this->_damage);
}

std::string		AWeapon::getName(void) const
{
	return (this->_name);
}

void	AWeapon::setName(std::string name)
{
	this->_name = name;
}

void	AWeapon::setAPCost(int APcost)
{
	this->_apcost = APcost;
}

void	AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}
