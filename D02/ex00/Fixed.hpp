/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 15:34:06 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/11/28 16:38:11 by lbisscho      ########   odam.nl         */
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
    static const int fractional_bits = 8;
};

#endif