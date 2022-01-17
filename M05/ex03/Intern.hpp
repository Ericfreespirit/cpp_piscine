#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "Form.hpp"
class Intern {

public:
    Intern();
    ~Intern();
    
    Form *makeForm(std::string form_concret, std::string target);
    Form *createPre(std::string target);
    Form *createRob(std::string target);
    Form *createShr(std::string target);

};

typedef struct form_s{
    std::string fc_name;
    Form *(Intern::*ptr)(std::string target);

}   t_form;
#endif