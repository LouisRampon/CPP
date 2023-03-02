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

        bool	operator>(const Fixed &rhs);
        bool	operator<(const Fixed &rhs);
        bool	operator<=(const Fixed &rhs);
        bool	operator>=(const Fixed &rhs);
        bool	operator==(const Fixed &rhs);
        bool	operator!=(const Fixed &rhs);

        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;
        
        Fixed	operator++(void);
		Fixed	operator++(int n);
		Fixed	operator--(void);
		Fixed	operator--(int n);

        Fixed static &max(Fixed &nb1, Fixed &nb2);
        Fixed static const &max(const Fixed &nb1, const Fixed &nb2);
        Fixed static &min(Fixed &nb1, Fixed &nb2);
        Fixed static const &min(const Fixed &nb1, const Fixed &nb2);

    private:
        int _nbr;
        int const static _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &source );


#endif