#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void l()
{
	system("leaks Bureaucrat");
}

int main ()
{
	atexit (l);
	try {
		// Bureaucrat a("wrre", 12);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery", "Bender");
		// rrf->beSigned(a);
		delete rrf;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}