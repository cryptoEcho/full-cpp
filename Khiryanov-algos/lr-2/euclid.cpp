#include <iostream>

#define mod %
int euclid(int a, int b) {
    int r, nod;
    while (b > 0) {
        r = a mod b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << euclid(a, b);
}