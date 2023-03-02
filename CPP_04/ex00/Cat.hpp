#ifndef Cat_H
# define Cat_H

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat(void);
        Cat(const Cat &src);
        Cat & operator=(const Cat &src);
        virtual ~Cat(void);

        virtual void makeSound(void) const;
};

#endif