/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:49:44 by bgales            #+#    #+#             */
/*   Updated: 2023/06/04 15:22:08 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define UNSIGNED 0
#define SIGNED 1

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		int const 	_execGrade;
		int const 	_signGrade;
		bool		_status;
	public:
		Form();
		Form(std::string const name, int execGrade, int signGrade);
		Form(Form const &other);
		~Form();
		Form &operator=(Form const &other);
		friend std::ostream& operator<<(std::ostream&os, const Form &rhs);

		std::string const getName() const;
		int		getGrade(std::string type) const;
		int		getStatus() const;
		void 	checkRange(int n, std::string type);

		void 	beSigned(Bureaucrat a);
		void	signAuthorized(Bureaucrat a);
		void	execAuthorized(Bureaucrat a) const;

		virtual void	execute(Bureaucrat const &executor) const=0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class UnsignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class AlreadySignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"