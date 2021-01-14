/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 15:12:27 by liz           #+#    #+#                 */
/*   Updated: 2021/01/12 13:13:16 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->_grade = grade;
	}
	return ;
}

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	*this = copy;
	return ;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	if ((this->_grade -= 1) < 1)
	{
		throw GradeTooHighException();
	}
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	if ((this->_grade += 1) > 150)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade++;
}

std::ostream const & operator<<(std::ostream & stream, Bureaucrat const & Bureaucrat)
{
	stream << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade()<< "." << std::endl;
	return (stream);
}