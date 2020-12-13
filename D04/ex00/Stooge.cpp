/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 16:33:32 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:20:50 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Stooge.hpp"

Stooge::Stooge(std::string n)
{
    setName(n);
    std::cout << "Hello there my friends I am " << this->getName() << std::endl;
}

Stooge::Stooge(void)
{
    this->Victim::setName("Stoogerius");
    std::cout << "Hello there my friends I am " << this->getName() << std::endl;
}

Stooge::Stooge(Stooge const & rhs)
{
    *this = rhs;
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

std::ostream & operator<<(std::ostream & stream, Stooge & rhs)
{
    std::cout << "hello" << std::endl;
    stream << "I'm " << rhs.Victim::getName() << " and I like cats!" << std::endl;
    return (stream);
}