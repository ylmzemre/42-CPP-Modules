#include "Form.h"

int main()
{
    try
    {
    Bureaucrat Max("Max", 50);
    std::cout << Max << std::endl;

    Form Fox("Fox",66,44);
    Max.signForm(Fox);

    Form Frog("Frog", 40, 80);
    Max.signForm(Frog);

    std::cout << Fox << std::endl;
    std::cout << Frog << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}