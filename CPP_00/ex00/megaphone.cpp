#include <iostream>
#include <ctype.h>

char *ft_upper(char *str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    return (str);
}

int main (int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
        return (1);
    while (i < argc)
    {
        std::cout << ft_upper(argv[i]);
        i++;
    }
    std::cout << std::endl;
    return (0);
}
