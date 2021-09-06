/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/08 15:07:10 by liz           #+#    #+#                 */
/*   Updated: 2021/01/19 15:10:55 by liz           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	Form(void);
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExecute;
public:
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form const & copy);
	Form const & operator=(Form const & rhs);
	~Form(void);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeSign(void) const;
	int			getGradeExecute(void) const;
	void		beSigned(Bureaucrat const & rhs);
	
	
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw()
		{
			return ("Grade is too high");
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Grade is too low");
		}
	};
	class FormAlreadySigned : public std::exception {
	public:
		const char * what() const throw()
		{
			return ("Form Already signed");
		}
	};
};

std::ostream & operator<<(std::ostream & stream, Form const & form);

#endif