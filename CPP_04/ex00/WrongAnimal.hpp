#ifndef WrongAnimal_H
# define WrongAnimal_H

#include <iostream>
#include <string>

class WrongAnimal
{
    public :
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal & operator=(const WrongAnimal &src);
        virtual ~WrongAnimal(void);

        std::string getType(void) const;
        virtual void makeSound(void) const;
    
    protected :
        std::string _type;
};

#endif