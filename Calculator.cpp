// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getInput() {
    int input{};
    std::cin >> input;
    return(input);
}
void addition()
{
    std::cout << "Type the 2 numbers you would like to add\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << "The sum of " <<x << " and " << y << " is " << x + y;

}

void subtraction()
{
    std::cout << "Type the 2 numbers you would like to subtract\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "-" << y << " = " << x - y;

}
void multiplication()
{
    std::cout << "Type the 2 numbers you would like to multiply\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "*" << y << " = " << x * y;
}
void division ()
{
    std::cout << "Type the 2 numbers you would like to divide\n";
    int x{ getInput() };
    int y{ getInput() };
    std::cout << x << "/" << y << " = " << x / y;
}

int main()
{
    std::cout << "Hello, welcome to this primitive calculator program!";
    std::cout << "Please choose what you want to do\n";
    std::cout << "[1] Add 2 integers\n[2] Subtract 2 integers \n[3] Multiply 2 integers\n[4] Divide 2 integers\n";
    int menuChoice{ getInput() };
    std::cout << "You chose: " << menuChoice << std::endl;
    if (menuChoice == 1)
    {
        std::cout << "Running addition function... \n";
        addition();
    }
    else if (menuChoice == 2)
    {
        std::cout << "Running subtraction function... \n";
        subtraction();

    }

    else if (menuChoice == 3)
    {
        std::cout << "Running multiplication function... \n";
        multiplication();
    }
    else if (menuChoice == 4)
    {
        std::cout << "Running division function... \n";
        division();
    }
    else {

        return 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
