#include "Harl.hpp"

Harl::Harl(void)
{
    this->_ptrFunction[0] = (&Harl::_debug);
	this->_ptrFunction[1] = (&Harl::_info);
	this->_ptrFunction[2] = (&Harl::_warning);
	this->_ptrFunction[3] = (&Harl::_error);
	this->_lvl[0] = "DEBUG";
	this->_lvl[1] = "INFO";
	this->_lvl[2] = "WARNING";
	this->_lvl[3] = "ERROR";
    std::cout << "Harl has been created" << std::endl;
    return;
}

Harl::~Harl(void)
{
    std::cout << "a Harl has been destroyed" << std::endl;
    return;
}

void Harl::complain(std::string level)
{
    int i = 0;
    while (i < 4)
    {
        if (level == this->_lvl[i])
        {
            (void)(this->*_ptrFunction[i])();
            return ;
        }
        i++;
    }
}

void	Harl::_debug( void )
{
	std::cout << "I love you" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I like you" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I don't like you" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "I hate you" << std::endl;
}
