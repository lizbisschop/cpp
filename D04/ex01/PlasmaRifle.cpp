/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:46:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 17:52:40 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{
    return ;
}

PlasmaRifle::PlasmaRifle (PlasmaRifle const & rhs)
{
    *this = rhs;
    return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
    return ;
}

PlasmaRifle const & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}

void    PlasmaRifle::attack() const
{
    std::cout "* piouuu piouuu piouuu *" << std::endl;
}