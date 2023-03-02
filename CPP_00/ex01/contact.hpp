#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        void    setInfo(void);
        void    getInfo(int index);
        void    printInfo(void);

    private:
        std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif