#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
			Intern();
			~Intern();
			Intern(const Intern &other);
			Intern& operator=(const Intern& other);

			AForm* makeForm(const std::string& formName, const std::string& target) const;

		class UnknownFormException : public std::exception
        {
        public:
            virtual const char* what() const throw() {return "Form doesnt exist.";}
        };
};



#endif