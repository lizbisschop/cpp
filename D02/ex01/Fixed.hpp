/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 15:34:06 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/11/30 12:43:51 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {
public:
	Fixed(void);
	Fixed(Fixed const & fixed);
	Fixed(int const num);
	Fixed(float const num);
	~Fixed(void);
	Fixed  & operator=(Fixed const & rhs);
	float   toFloat(void) const;
	int     toInt(void) const;
	int    getRawBits(void) const;
	void    setRawBits(int const raw);
	
private:
	int _fixed_point_val;
	static const int _fractional_bits = 8;
};

std::ostream  & operator<<(std::ostream & stream, Fixed const & rhs);

#endif