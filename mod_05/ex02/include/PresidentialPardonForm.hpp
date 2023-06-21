/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:16:52 by bgales            #+#    #+#             */
/*   Updated: 2023/06/04 11:39:37 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#pragma once

class PresidentialPardonForm : public Form
{
	private:
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void	execute(Bureaucrat const & executor) const;
};
