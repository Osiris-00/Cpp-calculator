#include "multiplication.h"
#include <iostream>
#include "getInput.h"
void multiplication()
{
    std::cout << "Running multiplication function... \n";
    std::cout << "Type the 2 numbers you would like to multiply\n";

    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "*" << y << " = " << x * y;
}