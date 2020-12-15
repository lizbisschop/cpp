/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:49:56 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 11:34:13 by lbisscho      ########   odam.nl         */
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
};

#endif