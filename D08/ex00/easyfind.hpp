/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/26 11:44:31 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 15:14:18 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T & container, int const arg)
{
	typename T::iterator found = find(container.begin(), container.end(), arg);

	if (found != container.end())
		return (found);
	else
		throw std::runtime_error("Argument not found");
}

#endif