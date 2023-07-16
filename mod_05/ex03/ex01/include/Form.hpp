/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:49:44 by bgales            #+#    #+#             */
/*   Updated: 2023/07/12 12:13:29 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;

#define UNSIGNED 0
#define SIGNED 1

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
		void 	beSigned(Bureaucrat a);
		void	signAuthorized(Bureaucrat a);
		void 	checkRange(int n, std::string type);
		int		getStatus() const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Bureaucrat.hpp"