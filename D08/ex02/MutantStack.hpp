/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 12:32:06 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 16:51:13 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
private:
	
public:
	MutantStack(void) {return ;}
	~MutantStack(void) {return ;}
	MutantStack(MutantStack const & copy){
		*this = copy;
		return ;}
	MutantStack & operator=(MutantStack const & rhs)
	{
		this->c = rhs.c;
		return (*this);
	}
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::iterator const_iterator;
	
	const_iterator cbegin(void)
	{
		return (this->c.begin());
	}

	const_iterator cend(void)
	{
		return (this->c.end());
	}

	iterator begin(void)
	{
		return (this->c.begin());
	}

	iterator end(void)
	{
		return (this->c.end());
	}
};

#endif