#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool is_signed;
    const int grade_to_sign;
    const int grade_to_execute;

public:
    AForm(const std::string& name, int grade_to_sign, int grade_to_execute);
    virtual ~AForm();
    AForm(const AForm& src);
    AForm &operator=(const AForm& src);

    const std::string& getName() const;
    int 			   getGradeToSign() const;
    int 			   getGradeToExecute() const;

    void beSigned(const Bureaucrat& bureaucrat);
    bool isSigned() const;

	void execute(const Bureaucrat &executor) const;

	// pure virtual, classe abstrata
    virtual void action(const Bureaucrat& executor) const = 0;

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

	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream& out, const AForm& AForm);

#endif
