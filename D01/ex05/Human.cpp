/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 14:27:43 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 12:23:05 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

std::string Human::identify(void)
{
	return (this->_brain.identify());
}

Brain const &Human::getBrain(void)
{
	return (this->_brain);
}
