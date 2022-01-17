#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


Intern::Intern(){};

Intern::~Intern(){};


Form *Intern::createPre(std::string target){
    return (new PresidentialPardonForm(target));
}

Form *Intern::createRob(std::string target){
    return (new RobotomyRequestForm(target));
}

Form *Intern::createShr(std::string target){
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string fc, std::string t){
    int     n = 3;
    Form *(Intern::*ptr)(std::string);
    t_form tab[n];
    {
        tab[0].fc_name = "robotomy request",
        tab[0].ptr = &Intern::createRob,
        tab[1].fc_name = "presidential pardon",
        tab[1].ptr = &Intern::createPre,
        tab[2].fc_name = "shrubbery creation",
        tab[2].ptr = &Intern::createShr;
    };
    for (int i = 0; i < n; i++){
        if (tab[i].fc_name == fc)
        {
            ptr = tab[i].ptr;
            return (this->*ptr)(t);
        }
    }
    std::cerr << "Form <" << fc << ">" << " doesn't exist" << std::endl;
    return (NULL);
}
