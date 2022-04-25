#include <iostream>

auto sum(int a, int b) -> int {
    int sum = a + b;
    return sum;
}


int main() {
    int a, b;
    std::cout << "Welcome to The Sum Program!\n" << "------------------------\n";
    std::cout << "Enter two numbers and the program will calculate the sum\n";
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << sum(a, b) << std::endl;
    return 0;
}