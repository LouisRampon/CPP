#ifndef Harl_H
# define Harl_H

# include <iostream>
#include <string>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);

    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
        void (Harl::*_ptrFunction[4])(void);
        std::string _lvl[4];
};


#endif
