#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
			const std::string 	name;
			int					grade;
	public:
			Bureaucrat(const std::string name, int grade);
			~Bureaucrat();
			Bureaucrat(const Bureaucrat& src);
			Bureaucrat &operator=(const Bureaucrat &src);

			void incrementGrade();
    		void decrementGrade();

			class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
			};

			class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
			};


			int	getGrade();
			const std::string getName();
};

			std::ostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif