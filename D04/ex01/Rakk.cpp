/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Rakk.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 14:14:47 by liz           #+#    #+#                 */
/*   Updated: 2021/02/10 15:15:25 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Rakk.hpp"

Rakk::Rakk(void): Enemy(70, "Rakk")
{
    std::cout << "* Rakakakaka *" << std::endl;
    return ;
}

Rakk::Rakk(Rakk const & rhs)
{
    std::cout << "* Rakakakaka *" << std::endl;
    *this = rhs;
    return ;
}

Rakk::~Rakk(void)
{
    std::cout << "* Tun Tun Tun *" << std::endl;
    return ;
}

Rakk & Rakk::operator=(Rakk const & rhs)
{
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());
    return (*this);
}
