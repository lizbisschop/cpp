/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:49:56 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/15 10:15:05 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist(void);
    PowerFist(PowerFist const & rhs);
    PowerFist const & operator=(PowerFist const & rhs);
    virtual ~PowerFist(void);

	void	attack(void) const;
};

#endif