#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data		data;
	uintptr_t	serial;
	Data		*deserial;
	
	data.x = 5;
	data.y = 15;
	
	std::cout << "Data address : " << &data << std::endl;
	std::cout << "Data values : " << "x: " << data.x << ", " << "y: " << data.y << std::endl;
	
	serial = serialize(&data);
	std::cout << "Serialize : " << serial << std::endl;

	deserial = deserialize(serial);
	std::cout << "Deserialize : " << deserial << std::endl;
	std::cout << "Data values : " << "x:" << deserial->x << ", " << "y: " << deserial->y << std::endl;
	
	return (0);
}