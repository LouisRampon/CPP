#ifndef Dog_H
# define Dog_H

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog(void);
        Dog(const Dog &src);
        Dog & operator=(const Dog &src);
        virtual ~Dog(void);

        virtual void makeSound(void) const;
};

#endif