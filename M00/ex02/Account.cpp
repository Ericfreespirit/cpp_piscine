#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    time_t now = time(NULL);
    tm *ltm = localtime(&now);

    std::cout << "[" << 1900 +ltm->tm_year << 1 + ltm->tm_mon  <<  ltm->tm_mday << "_";
    std::cout << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "]";
}

Account::Account ( int initial_deposit ) :
_accountIndex(Account::_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0) 
{
    Account::_displayTimestamp();

    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;

    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account (void)
{
	Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

int     Account::getNbAccounts( void )
{
    return(Account::_nbAccounts);
}

int     Account::getTotalAmount( void )
{
    return(Account::_totalAmount);
}

int     Account::getNbDeposits( void )
{
    return(Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals( void )
{
    return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals();
    std::cout << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    this->_totalNbDeposits += ++this->_nbDeposits;
    this->_totalAmount += deposit;
    std::cout << "nb_deposits:" << this->_nbDeposits ;
    std::cout << std::endl;
}


bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";

    // account is negative
    if (this->_amount - withdrawal < 0)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    this->_amount -= withdrawal;
    std::cout << "amount:" << this->_amount << ";";
    this->_totalNbWithdrawals += ++this->_nbWithdrawals;
    this->_totalAmount -= withdrawal;
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    return (true);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits<< ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;

}
