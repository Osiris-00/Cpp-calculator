
#include <iostream>
#include "getInput.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

int main()
{
    std::cout << "Hello, welcome to this primitive calculator program!";
    std::cout << "Please choose what you want to do\n";
    std::cout << "[1] Add 2 integers\n[2] Subtract 2 integers \n[3] Multiply 2 integers\n[4] Divide 2 integers\n";
    int menuChoice{ getInput() };
    std::cout << "You chose: " << menuChoice << std::endl;
    if (menuChoice == 1)
    {
        
        addition();
    }
    else if (menuChoice == 2)
    {
        
        subtraction();

    }

    else if (menuChoice == 3)
    {
       
        multiplication();
    }
    else if (menuChoice == 4)
    {
        
        division();
    }
    else {

        return 0;
    }
}

