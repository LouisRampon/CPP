#ifndef Cat_H
# define Cat_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public :
        Cat(void);
        Cat(const Cat &src);
        Cat & operator=(const Cat &src);
        virtual ~Cat(void);

        Brain &getBrain(void);
        virtual void makeSound(void) const;

    private :
        Brain *_brain;

};

#endif