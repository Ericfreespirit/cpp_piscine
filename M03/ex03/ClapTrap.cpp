#include "ClapTrap.hpp"

const int   init_energy = 50;
const int   init_dammage = 20;
const int   init_hitpoints = 100;

ClapTrap::ClapTrap(std::string name):
_name(name),
_energy(init_energy),
_dammage(init_dammage),
_hitpoints(init_hitpoints){
    std::cout << "Constructor ClapTrap <" << this->_name  << "> created" << std::endl;
}

ClapTrap::ClapTrap():
_name("no_name"),
_energy(init_energy),
_dammage(init_dammage),
_hitpoints(init_hitpoints){
    std::cout << "Constructor ClapTrap <" << this->_name  << "> created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    *this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref){
    this->_name = ref._name;
    this->_energy = ref._energy;
    this->_dammage = ref._dammage;
    this->_hitpoints = ref._hitpoints;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor ClapTrap <" << this->_name  << "> destroyed" << std::endl;
}

void    ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", ";   
    std::cout << "causing " << this->_dammage << " points of damage" << std::endl;    
}

void    ClapTrap::takeDamage(unsigned int amount){
    this->_energy -= amount;
    this->_energy = this->_energy <= 0 ? 0 : this->_energy;

    std::cout << "ClapTrap " << this->_name << " take " << amount ;   
    std::cout << " points of damage " <<", " << this->_energy << " energy point remaining";
    std::cout << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    this->_energy += amount;

    std::cout << "ClapTrap " << this->_name << " be repaired " << amount ;   
    std::cout << " points of energy " <<", " << this->_energy << " energy point remaining";
    std::cout << std::endl;
}


int     ClapTrap::getDammage()const{
    return (this->_dammage);
}

int     ClapTrap::getEnergypoints()const{
    return (this->_energy);
}

int     ClapTrap::getHitpoints()const{
    return (this->_hitpoints);
}

std::string     ClapTrap::getName()const{
    return(this->_name);
}