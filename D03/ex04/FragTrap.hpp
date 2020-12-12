/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 15:16:36 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/12 14:55:49 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap {
public:
    FragTrap(void);
    FragTrap(std::string n);
    FragTrap(FragTrap const & rhs);
    FragTrap & operator=(FragTrap const & rhs);
    ~FragTrap(void);
    void    vaulthunter_dot_exe(std::string const & target);
};

#endif
