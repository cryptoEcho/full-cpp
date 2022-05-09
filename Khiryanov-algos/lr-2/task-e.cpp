// Find the max value in the sequence of natural values
#include <iostream>

// using std::cout, std::cin, std::endl;
int main() {
    int x, max = 0;
    std::cin >> x;
    while (x != 0) {
        if (x % 2 == 0 && max < x) {
            max = x;
        }
        std::cin >> x;
    }
    std::cout << max << std::endl;
    return 0;
}