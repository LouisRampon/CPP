#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vectorInt(3);
	std::vector<int> vectorInt2(10, 42); // 10 values initialized at 42
	std::list<int> listInt;
	
	std::vector<char> vectorChar(4);
	std::list<int> listChar(4);
	
	vectorInt[0] = 14;
	vectorInt[1] = 28;
	vectorInt[2] = 35;
	
	listInt.push_back(14);
	listInt.push_back(15);

	vectorChar[0] = 'd';
	vectorChar[1] = 'i';
	vectorChar[2] = 'c';
	vectorChar[3] = 'k';
	
	listChar.push_back('b');
	listChar.push_back('i');
	listChar.push_back('t');
	listChar.push_back('e');
	
	std::cout << "--------------- Find int : vector ---------------" << std::endl;
	try
	{
		easyfind(vectorInt, 35);
		easyfind(vectorInt2, 95);
		easyfind(vectorInt, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "--------------- Find int : list ---------------" << std::endl;
	try
	{
		easyfind(listInt, 14);
		easyfind(listInt, 16);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}