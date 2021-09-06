/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/01 12:43:58 by liz           #+#    #+#                 */
/*   Updated: 2021/02/05 17:05:40 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<std::string> 	stringstack;
	stringstack.push("hello");
	stringstack.push("what up");
	stringstack.push("joehoeee");

	MutantStack<std::string>::const_iterator sit = stringstack.cbegin();
	MutantStack<std::string>::const_iterator site = stringstack.cend();
	while (sit != site)
	{
		std::cout << *sit << std::endl;
		sit++;
	}
	std::cout << "Top of stringstack = " << stringstack.top() << std::endl;
	std::cout << "Size of stringstack = " << stringstack.size() << std::endl;
	MutantStack<int> intstack;
	intstack = mstack;
	intstack.pop();
	MutantStack<int>::iterator iit =  intstack.begin();
	MutantStack<int>::iterator iite =  intstack.end();
	while (iit != iite)
	{
		std::cout << *iit << std::endl;
		iit++;
	}

	return 0;
}
