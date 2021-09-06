/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 12:26:22 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 15:29:08 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T & s1, T & s2)
{
	T tmp = s1;
	s1 = s2;
	s2 = tmp;
}

template <typename T>
T const & min(T const & arg1, T const & arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

template <typename T>
T const & max(T const & arg1, T const & arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif