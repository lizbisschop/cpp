/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:51:00 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 18:08:06 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
    return ;
}

PowerFist(PowerFist const & rhs)
{
    *this = rhs;
    return ;
}

PowerFist::~PowerFist(void)
{
    return ;
}

PowerFist const & PowerFist::operator=(PowerFist const & rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
}

void    PowerFist::attack() const
{
    std::cout "* pschhh... SBAM! *" << std::endl;
}