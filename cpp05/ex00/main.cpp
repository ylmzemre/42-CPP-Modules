#include "Bureaucrat.h"

int main() {
    try {
        Bureaucrat b("Max", 50);
        std::cout << b << std::endl;
        
        b.decrementGrade();
        std::cout << b << std::endl;

        Bureaucrat b2("Elvis", 150);
        std::cout << b2 << std::endl;

        b2.decrementGrade();
        std::cout << b2 << std::endl;
  

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}