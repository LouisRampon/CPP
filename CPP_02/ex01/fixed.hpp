#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int newNbr);
        Fixed(const float newNbr);
        Fixed(const Fixed &source);
		Fixed & operator=(const Fixed &source);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;

    private:
        int _nbr;
        int const static _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &source );

#endif