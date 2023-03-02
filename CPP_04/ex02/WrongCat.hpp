#ifndef WrongCat_H
# define WrongCat_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat(void);
        WrongCat(const WrongCat &src);
        WrongCat & operator=(const WrongCat &src);
        virtual ~WrongCat(void);

        virtual void makeSound(void) const;
};

#endif