#include <iostream>

int main() {
    int year;
    std::cin >> year;
    if ( (year % 4 == 0 && year % 100 != 0) or year % 400 == 0) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
}