#include <iostream>
#include "log.cpp"
// #include "var.cpp"

void Hello(const char* name);
int var();

int main() {
    int t;
    printf("%d", t);
    std::cout << "Hello, World!\nNow please enter your name: ";
    char* name;
    std::cin >> name;
    printf("Hello %s \n", name);
    // Hello(name);
    // var();
    return 0;
}