#include <iostream>
#define mod %

int main() {
    int value, count = 0;
    std::cin >> value; 
    while (value != 0) {
        if (value % 2 == 0) {
            count ++;
        }
        std::cin >> value; 

    }
    std::cout << count << std::endl;
    return 0;
}