#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <map>

class Karen {

public:

    Karen();
    ~Karen();
    bool    complain( std::string level );

private:

    void    _debug( void );
    void    _info( void );
    void    _warning( void );
    void    _error( void );
};
typedef struct s_all
{
    std::string level;    
} t_all;

#endif