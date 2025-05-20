#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
        int getRawBits(void)const;
        void    setRawBits(int const raw);
};

#endif