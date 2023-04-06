#include <iostream>
#include "subtraction.h"
#include "getinput.h"
void subtraction()
{
    std::cout << "Running subtraction function... \n";
    std::cout << "Type the 2 numbers you would like to subtract\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "-" << y << " = " << x - y;

}