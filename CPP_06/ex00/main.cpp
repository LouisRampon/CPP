#include "main.hpp"

int check_literal(std::string arg)
{
	if (arg.compare("-inff") == 0)
		return (MINUSINFF);
	if (arg.compare("+inff") == 0)
		return (PLUSINFF);
	if (arg.compare("nanf") == 0)
		return (NANF);
	if (arg.compare("-inf") == 0)
		return (MINUSINF);
	if (arg.compare("-inf") == 0)
		return (PLUSINF);
	if (arg.compare("nan") == 0)
		return (_NAN);
	else 
		return (0);
}

int check_type(std::string arg)
{
	int i = 0;
	bool virgule = false;

	if (!isdigit(arg[0]) && arg.length() == 1)
		return (isCHAR);
	if (check_literal(arg))
		return (check_literal(arg));
	if (arg[i] == '-')
		i++;
	while(arg[i])
	{
		if (arg[i] == '.')
			virgule = true;
		else if (isalpha(arg[i]))
		{
			if (arg[i] == 'f' && !arg[i + 1])
				return (isFLOAT);
			else
				return (-1);
		}
		i++;
	}
	if (virgule)
		return(isDOUBLE);
	return (isINT);
}

void ft_char_to_else(std::string arg)
{
	char c = arg[0];
	int i = c;
	double d = static_cast<double>(c);
	float f = c;


	std::cout << "char = " << c << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "float = " << f << "f" << std::endl;
}

void ft_int_to_else(std::string arg)
{
	int i = std::stoi(arg);
	double d = i;
	float f = i;
	
	if (std::isprint(i))
	{
		char c = static_cast<char>(i);
		std::cout << "char = " << c << std::endl;
	}
	else
		std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "float = " << f << "f" << std::endl;
}

void ft_double_to_else(std::string arg)
{
	double d = std::stod(arg);
	int i = d;
	float f = d;

	if (std::isprint(i))
	{
		char c = static_cast<char>(i);
		std::cout << "char = " << c << std::endl;
	}
	else
		std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "float = " << f << "f" << std::endl;
}

void ft_float_to_else(std::string arg)
{
	float f = std::stof(arg);
	int i = f;
	double d = f;

	if (std::isprint(i))
	{
		char c = static_cast<char>(i);
		std::cout << "char = " << c << std::endl;
	}
	else
		std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "float = " << f << "f" << std::endl;
}

void ft_print_minusinf(void)
{
	std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = cannot be display" << std::endl;
	std::cout << "double = -inf" << std::endl;
	std::cout << "float = -inf" << "f" << std::endl;
}

void ft_print_nan(void)
{
	std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = cannot be display" << std::endl;
	std::cout << "double = nan" << std::endl;
	std::cout << "float = nan" << "f" << std::endl;
}

void ft_print_plusinf(void)
{
	std::cout << "char = cannot be display" << std::endl;
	std::cout << "int = cannot be display" << std::endl;
	std::cout << "double = +inf" << std::endl;
	std::cout << "float = +inf" << "f" << std::endl;
}

int main(int argc, char **argv)
{
	int type;

	if (argc != 2)
	{
		std::cout << "wrong number of arg" << std::endl;
		return (1);
	}
	std::cout << std::fixed;
	std::cout.precision(1);
	type = check_type(argv[1]);
	if (type == 0)
		ft_char_to_else(argv[1]);
	else if (type == 1)
		ft_int_to_else(argv[1]);
	else if (type == 2)
		ft_double_to_else(argv[1]);
	else if (type == 3)
		ft_float_to_else(argv[1]);
	else if (type == 4 || type == 7)
		ft_print_minusinf();
	else if (type == 5 || type == 8)
		ft_print_plusinf();
	else if (type == 6 || type == 9)
		ft_print_nan();
}