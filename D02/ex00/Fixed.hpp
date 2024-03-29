/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 15:34:06 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/11/29 14:29:20 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed {
public:
    Fixed(void);
    Fixed(Fixed const & fixed);
    ~Fixed(void);
    Fixed  & operator=(Fixed const & rhs);
    int    getRawBits(void) const;
    void    setRawBits(int const raw);
    
private:
    int _fixed_point_val;
    static const int _fractional_bits = 8;
};

#endif