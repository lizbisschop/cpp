/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:03:05 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/06 11:25:28 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const & rhs)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    *this = rhs;
    return ;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}

SuperMutant const & SuperMutant::operator=(SuperMutant const & rhs)
{
   	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
    return (*this);
}

void				SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	setHP(damage);
}
