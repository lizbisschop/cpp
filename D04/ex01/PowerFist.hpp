/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:49:56 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:50:34 by lbisscho      ########   odam.nl         */
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
    ~PowerFist(void);
};

#endif