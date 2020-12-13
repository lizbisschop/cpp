/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 17:40:57 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/13 17:50:42 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const & rhs);
    PlasmaRifle const & operator=(PlasmaRifle const & rhs);
    ~PlasmaRifle(void);
};

#endif