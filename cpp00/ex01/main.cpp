#include "phonebook.hpp"

int main()
{
    Phonebook pb;
    pb.p_count = 0;
    std::string input;
    std::cout << "*-*-*-*-*-* Welcome to your *nokia 3310* phonebook *-*-*-*-*-*" << std::endl;
    std::cout << "You can only use this commands: ADD, SEARCH, EXIT" << std::endl;
    std:: cout << ">>>>";

    while (input != "EXIT")
    {
        std::getline(std::cin, input);
        if (input == "ADD")
            pb.add();
        else if (input == "SEARCH")
            pb.search();
        else if (input == "EXIT")
            break;
        std::cout << ">>>>"; 
    }
}