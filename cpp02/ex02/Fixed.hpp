#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed;
        static const int bit_fixed = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed &f);
        ~Fixed();
        int     getRawBits(void)const;
        void    setRawBits(int const raw);
        Fixed(const int int_num);
        Fixed(const float flo_num);
        float   toFloat(void)const;
        int toInt(void)const;

        Fixed operator+(const Fixed &f)const;
        Fixed operator*(const Fixed &f)const;
        Fixed operator-(const Fixed &f)const;
        Fixed operator/(const Fixed &f)const;

        bool    operator==(const Fixed &f)const;
        bool    operator!=(const Fixed &f)const;
        bool    operator>(const Fixed &f)const;
        bool    operator<(const Fixed &f)const;
        bool    operator>=(const Fixed &f)const;
        bool    operator<=(const Fixed &f)const;
        Fixed&  operator++(void);
        Fixed&  operator--(void);
        Fixed   operator++(int);
        Fixed   operator--(int);
        static const   Fixed& max(const Fixed &a, const Fixed &b);
        static const   Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static Fixed&  min(Fixed &a, Fixed &b);



};

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);

#endif