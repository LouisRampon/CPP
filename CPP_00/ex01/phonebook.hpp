#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void setContact(int indexContact);
        void getContact(int indexContact);
        void getOneContact(int indexContact);

    private:
        Contact contact[8];
};

#endif
