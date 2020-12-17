/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 18:10:26 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 10:36:01 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const & rhs)
{
    std::cout << "* click click click *" << std::endl;
    *this = rhs;
    return ;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

RadScorpion const & RadScorpion::operator=(RadScorpion const & rhs)
{
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
    return (*this);
}

