#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

   std::cout << "memory address of the string: " << &string << std::endl;
	std::cout << "memory address held by string pointer: "<< stringPTR << std::endl;
	std::cout << "memory address held by string reference: "<< &stringREF << std::endl;
	std::cout << "value of string: " << string << std::endl;
	std::cout << "value of string pointer: " << *stringPTR << std::endl;
	std::cout << "value of string reference: " << stringREF << std::endl;
}