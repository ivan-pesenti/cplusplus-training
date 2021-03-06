// Debugging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printValue(int value)
{
//std::cerr << "getValue() called\n"; // line not indented in order to spot it easily when we must remove it
    std::cout << value << '\n';
}

void a()
{
    std::cout << "a() called\n";
}

void b()
{
    std::cout << "b() called\n";
    a();
}

int add(int x, int y)
{
    return x + y;
}

void testadd()
{
    std::cout << "This function should return: 2 0 0 -2\n";
    std::cout << add(1, 1) << ' ';
    std::cout << add(-1, 1) << ' ';
    std::cout << add(1, -1) << ' ';
    std::cout << add(-1, -1) << ' ';
}

int main()
{
//std::cerr << "main() called\n";
    /*printValue(5);
    printValue(6);
    printValue(7);*/

    /*int x{ 1 };
    std::cout << x << '\n';

    x = x + 2;
    std::cout << x << '\n';

    x = x + 3;
    std::cout << x << '\n';*/

    /*a();
    b();*/
    
    testadd();

    return 0;
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
