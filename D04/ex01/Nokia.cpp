/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Nokia.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 12:54:40 by liz           #+#    #+#                 */
/*   Updated: 2021/02/08 17:09:59 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Nokia.hpp"

Nokia::Nokia(void): AWeapon("Nokia Phone", 10, 5000)
{
    return ;
}

Nokia::Nokia (Nokia const & rhs)
{
    *this = rhs;
    return ;
}

Nokia::~Nokia(void)
{
    return ;
}

Nokia & Nokia::operator=(Nokia const & rhs)
{
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());
    return (*this);
}

void    Nokia::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}