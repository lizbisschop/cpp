/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 16:33:32 by lbisscho      #+#    #+#                 */
/*   Updated: 2021/01/04 18:28:59 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Stooge.hpp"

Stooge::Stooge(std::string n): Victim(n)
{
    std::cout << "Hello there my friends I am " << this->getName() << std::endl;
}

Stooge::Stooge(Stooge const & rhs): Victim(rhs)
{
    return ;
}

Stooge::~Stooge(void)
{
    std::cout << "Its time for " << this->getName() << " to go." << std::endl;
}

Stooge const & Stooge::operator=(Stooge const & rhs)
{
    this->Victim::setName(rhs.Victim::getName());
    return (*this);
}

void			Stooge::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a duck! Quak Quak" << std::endl;
}

std::ostream & operator<<(std::ostream & stream, Stooge & rhs)
{
    stream << "I'm " << rhs.Victim::getName() << " and I like cats!" << std::endl;
    return (stream);
}