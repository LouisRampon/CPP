#ifndef  WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon(void);
        void setType(std::string type);
        std::string &getType(void);

    private:
        std::string _type;
};


#endif