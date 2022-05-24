#include <iostream>

int add(int x, int y)
{
    // Summation of two integer numbers
    std::cout << "Running calculator...\n";
    return (x+y);
}

int main()
{
    /* This program calls function add() with two different sequences of numbers and print them.
    The function add() will be called only after the main function will be started. */
    std::cout << "What is 867 + 5309?\n";
    // int sum = add(867, 5309);
    std::cout << "The sum is " << add(867, 5309) << "\n\n";
    std::cout << "What is 777 + 9311?\n";
    std::cout << "The sum is " << add(777, 9311) << "\n";
    return 0;
}