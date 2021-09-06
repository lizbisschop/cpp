/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 11:49:35 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 12:23:01 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	setAddress();
	return ;
}

Brain::~Brain(void)
{
	return;
}

void	Brain::setAddress(void)
{
	std::stringstream buffer;
	
	buffer << this;
	this->_address = buffer.str();
}

std::string Brain::identify(void) const
{
	return (this->_address);
}