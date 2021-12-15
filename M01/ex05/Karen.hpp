#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen {

public:

    Karen();
    ~Karen();
    void    complain( std::string level );

private:

    void    _debug( void );
    void    _info( void );
    void    _warning( void );
    void    _error( void );
};
typedef struct s_all
{
    std::string level;
    void    (Karen::*ptr)();
    
} t_all;

#endif