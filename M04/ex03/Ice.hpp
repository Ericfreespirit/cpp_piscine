#ifndef ICE_H
#define ICE_H

class Ice : public AMateria{
public:
    Ice();
    Ice(const Ice &ref);
    ~Ice();

    Ice &operator=(const Ice &ref);

    std::string const &getType() const; //Returns the materia type
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif