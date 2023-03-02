#ifndef Dog_H
# define Dog_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public :
        Dog(void);
        Dog(const Dog &src);
        Dog & operator=(const Dog &src);
        virtual ~Dog(void);

        Brain &getBrain(void);
        virtual void makeSound(void) const;

    private :
        Brain *_brain;

};

#endif