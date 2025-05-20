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
        
};
std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);
//ostream bir çıkış yönlendiricisidir. zaten standart bir sınıf olduğundan
//sınıfın dışına yazarız.
#endif