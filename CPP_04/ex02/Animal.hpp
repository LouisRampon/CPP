#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class AAnimal
{
    public :
        AAnimal(void);
        AAnimal(const AAnimal &src);
        AAnimal & operator=(const AAnimal &src);
        virtual ~AAnimal(void);

		std::string getType(void) const;

        virtual void makeSound(void) const = 0;
    
    protected :
        std::string _type;
};

#endif