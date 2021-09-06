/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:46:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:10:03 by liz           ########   odam.nl         */
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

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}