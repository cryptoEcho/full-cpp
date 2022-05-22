#include <iostream>

void increment(int a) {
    std::cout << a << std::endl;
    a++;
    std::cout << a << std::endl;
}

void increment(int* a) {
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    std::cout << "sizeof pointer " << sizeof(a) << std::endl;
    std::cout << "sizeof pointer's value " << sizeof(*a) << std::endl;
    *a = *a + 1;
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
}

int main() {
    int b = 3;
    // increment(b); // b will be copied. Due this it won't be changed.
    std::cout << std::endl << "in main: " << b << std::endl;
    increment(&b);
    std::cout << std::endl << "in main: " << b << std::endl;
    return 0;
}