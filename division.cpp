#include "division.h"
#include <iostream>
#include "getInput.h"

void division()
{
    std::cout << "Running division function... \n";
    std::cout << "Type the 2 numbers you would like to divide\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "/" << y << " = " << x / y;
}