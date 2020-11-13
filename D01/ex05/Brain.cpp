/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 11:49:35 by liz           #+#    #+#                 */
/*   Updated: 2020/10/15 11:49:18 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return;
}

std::string Brain::identify(void) const
{
	std::stringstream ss;

	ss << this;
	return (ss.str());
}