#ifndef Brain_H
# define Brain_H

#include <iostream>
#include <string>

class Brain
{
    public :
        Brain(void);
        Brain(const Brain &src);
        Brain & operator=(const Brain &src);
        virtual ~Brain(void);

        void setIdea(unsigned int i, std::string idea);
        std::string getIdea(unsigned int i);
    
    protected :
        std::string _ideas[100];
};

#endif