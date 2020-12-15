/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:31:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 11:51:20 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string n, int apcost, int damage): _name(n), _apcost(apcost), _damage(damage)
{
    return ;
}

AWeapon::AWeapon(void)
{
    return ;
}

AWeapon(AWeapon const & rhs)
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

int     AWeapon::getAPCost(void)
{
    return (this->_apcost);
}

int     AWeapon::getDamage(void)
{
    return (this->_damage);
}

void    AWeapon::attack() const
{
    
}