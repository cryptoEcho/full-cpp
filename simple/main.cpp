#include <iostream>
#include "log.cpp"

void Hello(const char* name);

int main() {
    std::cout << "Hello, World!\nNow please enter your name: ";
    char* name;
    std::cin >> name;
    Hello(name);
    return 0;
}