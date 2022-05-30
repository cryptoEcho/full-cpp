// a prime number test

#include <iostream>

int main(int argc, char* argv[]) {
    int x;
    bool is_prime = true;
    std::cin >> x; // a natural number
    int  divider = 2;
    while (divider <= x / 2) { // we don't need to check dividers until divider == x
        if (x % divider == 0) {
            is_prime = false;
            break;
        }
        divider++;
    }
    std::cout << is_prime << std::endl;

    return 0;
}