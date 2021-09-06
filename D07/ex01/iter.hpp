/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 13:38:20 by liz           #+#    #+#                 */
/*   Updated: 2021/01/28 15:55:23 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T const *array, int length, void f(const T& arg))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void	print_array(T const & arg)
{
	std::cout << arg << std::endl;
}

#endif