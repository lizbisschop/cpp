/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 15:17:35 by liz           #+#    #+#                 */
/*   Updated: 2021/01/14 12:34:10 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute, std::string target): _name(name), _signed(0), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _target(target) 
{
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (this->_gradeSign > 150 || this->_gradeExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(Form const & copy): _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute), _target(copy._target)
{
	return ;
}

Form const & Form::operator=(Form const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

std::string Form::getTarget(void) const
{
	return (this->_target);
}

void		Form::beSigned(Bureaucrat const & rhs)
{
	if (this->_signed == 1)
	{
		throw GradeAlreadySigned();
	}
	else if (rhs.getGrade() <= this->_gradeSign)
	{
		this->_signed = 1;
	}
	else
	{
		throw GradeTooLowException();
	}
	return ;
}

std::ostream & operator<<(std::ostream & stream, Form const & form)
{
	if (form.getSigned() == 1)
		stream << "Form " << form.getName() << " Grade to sign = " << form.getGradeSign() << " Grade to execute is " << form.getGradeExecute() << " is signed" << std::endl; 
	else
		stream << "Form " << form.getName() << " Grade to sign is " << form.getGradeSign() << " Grade to execute is " << form.getGradeExecute() << " is not signed" << std::endl; 
	return (stream);
}