#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;  // Forward declaration of Bureaucrat

class Form
{
private:
    const std::string name;
    bool is_signed;
    const int grade_to_sign;
    const int grade_to_execute;

public:
    Form(const std::string& name, int grade_to_sign, int grade_to_execute);
    ~Form();
    Form(const Form& src);
    Form& operator=(const Form& src);

    const std::string& getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
