
#include "addition.h"
#include <iostream>
#include "getInput.h"
void addition()
{
    std::cout << "Running addition function... \n";
    std::cout << "Type the 2 numbers you would like to add\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << "The sum of " << x << " and " << y << " is " << x + y;

}