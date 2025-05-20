#include "phonebook.hpp"

std::string Contact::stringlimit(std::string str) const
{
	if(str.length() > 10)
		return(str.substr(0,9) + ".");
	return(str);
}

void    Contact::add_attr(int index)
{
    while (1) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, this->name);
        if (!this->name.empty())
            break;
        std::cout << "Name cannot be empty. Please enter your name again." << std::endl;
    }
    while (1) {
        std::cout << "Enter your last name: ";
        std::getline(std::cin, this->lastName);
        if (!this->lastName.empty())
            break;
        std::cout << "Last name cannot be empty. Please enter your last name again." << std::endl;
    }

    while (1) {
        std::cout << "Enter your nick name: ";
        std::getline(std::cin, this->nickName);
        if (!this->nickName.empty())
            break;
        std::cout << "Nick name cannot be empty. Please enter your nick name again." << std::endl;
    }

    while (1) {
        std::cout << "Enter your phone number: ";
        std::getline(std::cin, this->phoneNumber);
        if (!this->phoneNumber.empty())
            break;
        std::cout << "Phone number cannot be empty. Please enter your phone number again." << std::endl;
    }

    while (1) {
        std::cout << "Enter your darkest secret: ";
        std::getline(std::cin, this->darkestSecret);
        if (!this->darkestSecret.empty())
            break;
        std::cout << "Darkest secret cannot be empty. Please enter your darkest secret again." << std::endl;
    }
    this->index = index;
    index++;
    std::cout << "Your informatons are saved." << std::endl;
}

void    Contact::designSearch()
{
    std::cout << "*----------*----------*----------*----------*\n";
    std::cout << "|" << std::setw(10) << this->index;
    std::cout << "|" << std::setw(10) << stringlimit(this->name);
    std::cout << "|" << std::setw(10) << stringlimit(this->lastName);
    std::cout << "|" << std::setw(10) << stringlimit(this->nickName) << "|" << std::endl;
    std::cout << "*----------*----------*----------*----------*\n";
}

void    Contact::more_info(int index)
{
    std::cout << "Index no->" << index << " Name-> " << this->name << std::endl;
    std::cout << "Index no->" << index << " Last Name-> " << this->lastName << std::endl;
    std::cout << "Index no->" << index << " Nickname-> " << this->nickName << std::endl;
    std::cout << "Index no->" << index << " Phone Number-> " << this->phoneNumber << std::endl;
    std::cout << "Index no->" << index << " Darkest secret-> " << this->darkestSecret << std::endl;
}