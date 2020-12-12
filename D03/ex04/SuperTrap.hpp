/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 14:22:08 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 15:39:04 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
    SuperTrap(void);
    SuperTrap(std::string n);
    SuperTrap const & operator=(SuperTrap const & rhs);
    ~SuperTrap(void);

    void meleeAttack(std::string target);
    void rangedAttack(std::string target);
private:
};

#endif