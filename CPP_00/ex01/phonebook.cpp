#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void    PhoneBook::setContact(int indexContact)
{
    this->contact[indexContact].setInfo();
}

void    PhoneBook::getContact(int indexContact)
{
    this->contact[indexContact].getInfo(indexContact);
}

void    PhoneBook::getOneContact(int indexContact)
{
    this->contact[indexContact].printInfo();
}
