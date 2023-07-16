/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:14:39 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 16:14:58 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		void	execute(Bureaucrat const & executor) const;
};
