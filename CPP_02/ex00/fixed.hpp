#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &source);
		Fixed & operator=(const Fixed &source);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _nbr;
        int const static _bits = 8;
};

#endif