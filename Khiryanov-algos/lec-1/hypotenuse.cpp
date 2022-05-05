#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
    int a, b;
    std::cout << "Enter legs values:\n";
    std::cin >> a >> b;
    int c = sqrt( pow(a, 2) + pow(b, 2) );
    std::cout << c << std::endl;
    return 0;
}