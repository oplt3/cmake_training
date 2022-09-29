//! \file Main.cpp
//! \brief Implements CMain

#include <iostream>
#include <animals/Dog.h>

int main()
{
    std::cout << "Hello World!" << std::endl;
    animals::CDog l_MyDog("Milou");
    std::cout << "My dog's name is " << l_MyDog.GetName() << " !" << std::endl;
    return 0;
}