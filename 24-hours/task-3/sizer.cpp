#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "The size of an integer:\t\t";
    std::cout << sizeof(int) << " bytes.\n";
    std::cout << "The size of a short integer:\t\t";
    std::cout << sizeof(short int) << " bytes.\n";
    std::cout << "The size of a long integer:\t\t";
    std::cout << sizeof(long int) << " bytes.\n";
    std::cout << "The size of a character:\t\t";
    std::cout << sizeof(char) << " bytes.\n";
    std::cout << "The size of a boolean:\t\t";
    std::cout << sizeof(bool) << " bytes.\n";
    std::cout << "The size of a float:\t\t";
    std::cout << sizeof(float) << " bytes.\n";
    std::cout << "The size of a double float:\t\t";
    std::cout << sizeof(double) << " bytes.\n";
    std::cout << "The size of a long long:\t\t";
    std::cout << sizeof(long long int) << " bytes.\n";

    return 0;
}