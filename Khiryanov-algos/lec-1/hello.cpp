#include <iostream>
#include <cstdio>

int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    // bool t = std::cout;
    printf("Hello%d\n", true);
    std::cout.put('c');
    std::cout << std::cout.badbit;
    std::cout.fail();
    // printf("%d\n", std::cout);
    if (std::cout) {
        return 0;
    }
    std::cerr << "Error!";
    return 5;
}