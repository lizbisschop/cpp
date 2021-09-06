/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/19 12:56:34 by liz           #+#    #+#                 */
/*   Updated: 2021/02/08 17:47:25 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & rhs)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = rhs;
	return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

ISpaceMarine* TacticalMarine::clone(void) const
{
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry(void) const
{ 
	std::cout << "For the holy PLOT" << std::endl;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
} 

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
