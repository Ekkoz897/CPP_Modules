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

			int		  		  getGrade() const;
			const std::string getName() const;


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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif