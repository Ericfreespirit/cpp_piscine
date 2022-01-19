#include <iostream>
#include <time.h>
#include <stdlib.h>    
#include "Base.hpp" 
#include "A.hpp" 
#include "B.hpp" 
#include "C.hpp" 

Base * generate(void){
    Base *p = NULL;

	srand (time(NULL));
	int	per = rand() % 3;
    if (per == 0)
        p = new A();
    else if (per == 1)
        p = new B();
    else if (per == 2)
        p = new C();
    return (p);
}

void identify(Base * p){
    std::cout << "pointer"<<std::endl;
    if (A *a = dynamic_cast<A*>(p))
        std::cout << a->getType() << std::endl;
    else if (B *b = dynamic_cast<B*>(p))
        std::cout << b->getType() << std::endl;
    else if (C *c = dynamic_cast<C*>(p))
        std::cout << c->getType() << std::endl;
}

void identify(Base & p){
    std::cout << "ref"<<std::endl;
    if (A *a = dynamic_cast<A*>(&p))
        std::cout << a->getType() << std::endl;
    else if (B *b = dynamic_cast<B*>(&p))
        std::cout << b->getType() << std::endl;
    else if (C *c = dynamic_cast<C*>(&p))
        std::cout << c->getType() << std::endl;

}
int main ()
{
    Base *base_ptr = generate();

    identify(base_ptr);
    identify(*base_ptr);
    delete base_ptr;
    return (0);
}