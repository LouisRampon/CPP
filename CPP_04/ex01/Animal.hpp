#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
    public :
        Animal(void);
        Animal(const Animal &src);
        Animal & operator=(const Animal &src);
        virtual ~Animal(void);

        std::string getType(void) const;
        virtual void makeSound(void) const;
    
    protected :
        std::string _type;
};

#endif