/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Rakk.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 14:14:47 by liz           #+#    #+#                 */
/*   Updated: 2021/01/06 14:17:48 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Rakk.hpp"

Rakk::Rakk(void): Enemy(70, "Rakk")
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

Rakk::Rakk(Rakk const & rhs)
{
    std::cout << "* click click click *" << std::endl;
    *this = rhs;
    return ;
}

Rakk::~Rakk(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

Rakk const & Rakk::operator=(Rakk const & rhs)
{
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
    return (*this);
}
