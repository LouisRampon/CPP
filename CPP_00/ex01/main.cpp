#include "phonebook.hpp"

void    ft_search(PhoneBook phoneBook)
{
    int i = 0;
    std::string str;

    std::cout << std::endl;
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nick name";
	std::cout << "|";

    while (i < 8)
    {
        phoneBook.getContact(i);
        i++;
    }
}

int main()
{
    std::string str;
    PhoneBook phoneBook;
    int i = 0;

    while (1)
    {
       std::getline(std::cin, str);
       if (str == "ADD")
       {
            phoneBook.setContact(i);
            if (i == 7)
				i = 0;
			else
				i++;
       }
       else if (str == "SEARCH")
       {
           ft_search(phoneBook);
       }
       else if (str == "EXIT")
        return (0);
    }
}

