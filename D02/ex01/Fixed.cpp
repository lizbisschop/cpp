/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lbisscho <lbisscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 15:34:02 by lbisscho      #+#    #+#                 */
/*   Updated: 2020/12/14 10:24:01 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constuctor called" << std::endl;
	this->_fixed_point_val = 0;
	return ;
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}


Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_val = num << this->_fractional_bits;
	return ;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_val = roundf(num * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point_val = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & stream, Fixed const & rhs)
{
	stream << rhs.toFloat();
	return stream;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_point_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_val = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point_val / (1 << this->_fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_point_val >> this->_fractional_bits);
}