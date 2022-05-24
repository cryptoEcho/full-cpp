#include <iostream>
#include <cstdint>

int main() {
    int x = 2;
    int32_t A[10];
    int y = 3;
    // A[100040] = 24;
    // A[10] = 5;
    std::cout << x << ' ' << y << std::endl;
    
    for (y=0; y<=10; y++) {
        A[y] = y + 1;
        std::cout << A[y] << ' ';
    }
    
    return 0;
}