/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:51:00 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/02/08 17:10:09 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist::PowerFist(PowerFist const & rhs)
{
    *this = rhs;
    return ;
}

PowerFist::~PowerFist(void)
{
    return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}