#include "phonebook.hpp"

void Phonebook::add()
{
    static int p_count;
    std::cout << "Enter your infos" << std::endl;

    if (p_count == 8)
        p_count = 0;
    this->people[p_count].add_attr(p_count);
    if (this->p_count != 8)
        this->p_count++;
    p_count++;
}

void Phonebook::search()
{
    if (p_count == 0)
    {
        std::cout << "You have no number here, please add first." << std::endl;
        return;
    }
    for (int index = 0; index < p_count; index++)
            this->people[index].designSearch();
    std::cout << "Enter a number for more details." << std::endl;
    std::cout << "=>";
    std::string number;
    int nb2;
    std::getline(std::cin, number);
    const char *nb = number.c_str();
    if (number >= "0" && number <= "7")
    {
        nb2 = atoi(nb);
        if (nb2 >= 0 && nb2 <= 7 && (nb2 < p_count))
            this->people[nb2].more_info(nb2);
        else if (nb2 < 0 || nb2 > 7 || (nb2 >= p_count))
            std::cout << "You can only use numbers between 0-7." << std::endl;
    }
    else
    {
        std::cout << "You can only use numbers between 0-7." << std::endl;
        return;
    }
}
