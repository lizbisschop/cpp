/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 11:35:07 by liz           #+#    #+#                 */
/*   Updated: 2020/12/08 12:21:23 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human {
public:
	Human(void);
	~Human(void);
	std::string identify(void);
	Brain const &getBrain(void);
private:
	Brain const _brain;
};

#endif
