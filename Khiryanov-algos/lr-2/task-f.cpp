// The number of elements equal the maximum
#include <iostream>

int main(int argc, char* argv[]) {
    int x, count = 0, max = 0;
    std::cin >> x;
    while (x != 0) { // the sequence of numbers ends with zero
        if (x > max) {
            max = x;
            count = 0;
        }
        if (x == max) {
            count ++;
        }
        std::cin >> x;
    }
    std::cout << count;
    return 0;
}