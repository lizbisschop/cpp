/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 11:42:54 by liz           #+#    #+#                 */
/*   Updated: 2020/12/04 11:58:54 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string n);
	NinjaTrap(NinjaTrap const & other);
	~NinjaTrap(void);
	void	NinjaShoebox(ClapTrap const &clap);
	void	NinjaShoebox(FragTrap const &frag);
	void	NinjaShoebox(ScavTrap const &scav);
	void	NinjaShoebox(NinjaTrap const &ninja);
};

#endif