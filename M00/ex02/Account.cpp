#include "Account.hpp"
#include <iostream>

static void	_displayTimestamp( void )
{
    time_t now = time(NULL);
    tm *ltm = localtime(&now);

    std::cout << "[" << 1900 +ltm->tm_year << 1 + ltm->tm_mon << "_";
    std::cout << 5 +ltm->tm_hour << 30 +ltm->tm_min << ltm->tm_sec << "]";
}



Account::Account ( int deposit )
{
    int i = 0;
    while (i <= _accountIndex)
    {
	    _displayTimestamp();
        std::cout << " index:" << i << ";";
        std::cout << "amount:" << deposit++ << ";";
        std::cout << "created" << std::endl;
        i++;
    }
}

Account::~Account (void)
{
	_displayTimestamp();
}


static void	displayAccountsInfos(void)
{
	_displayTimestamp();


}


// void	displayStatus( void ) const
// {
// 	_displayTimestamp();

// }
