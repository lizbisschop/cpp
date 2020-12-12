/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/03 11:58:51 by liz           #+#    #+#                 */
/*   Updated: 2020/12/03 16:39:50 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
#define SCAFTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const & other);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap(void);
	void	challengeNewcomer(std::string const & target);
};

#endif