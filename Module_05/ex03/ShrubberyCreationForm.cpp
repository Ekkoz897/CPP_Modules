#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) \
	: AForm("Shrubbery Creation", 145, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void) other;
	return (*this);
}

// .c_str para convertir de std::str para char * pq ofs n~ao aceita std::str
void ShrubberyCreationForm::action(const Bureaucrat &executor) const
{
	(void)executor;
    std::ofstream ofs((target + "_shrubbery").c_str());
    if (ofs.fail()) {
        throw std::ios_base::failure("Failed to open file");
    }
    ofs << "       _-_\n"
        << "    /~~   ~~\\\n"
        << " /~~         ~~\\\n"
        << "{               }\n"
        << " \\  _-     -_  /\n"
        << "   ~  \\\\ //  ~\n"
        << "_- -   | | _- _\n"
        << "  _ -  | |   -_\n"
        << "      // \\\\\n";
    ofs.close();
}