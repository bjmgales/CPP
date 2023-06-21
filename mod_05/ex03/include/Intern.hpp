/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:06 by bgales            #+#    #+#             */
/*   Updated: 2023/06/05 12:28:10 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Intern {

public:

    Intern();
    Intern(const Intern &);
    Intern& operator=(const Intern&);

    ~Intern();

    Form*    makeForm(std::string formType, std::string target);

    static Form*   makeRobotomy(std::string target);
    static Form*   makePardon(std::string target);
    static Form*   makeShrubbery(std::string target);

    Form*   (*functptr[3])(std::string);
};
