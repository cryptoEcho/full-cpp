// factorizing the given number to prime dividers
#include <iostream>

int main(int argc, char* argv[]) {
    int x, divider = 2;
    std::cin >> x; // x > 1
    while (x != 1) {
        if (x % divider == 0) {
            x /= divider;
            std::cout << divider << std::endl;
        } else {
            divider++;
        }

    }
    return 0;
}
