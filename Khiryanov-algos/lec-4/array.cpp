#include <iostream>
#include <cstdint>

int main() {
    int A[10];
    A[0] = 10;
    A[1] = 9;
    std::cout << A << std::endl; // A - pointer to A[0]
    std::cout << A[0] << std::endl;
    int *p;
    *p = 20;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    p = A;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    *p = 5;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    std::cout << A << std::endl; // A - pointer to A[0]
    std::cout << *A << std::endl; // A - pointer to A[0]
    std::cout << A[0] << std::endl; // A - pointer to A[0]
    p = p + 1; // we jump to next cell in array (->A[1])
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    /* итерирование по указателю
    *(p+i) = p[i] */
    A[100000] = 22;
    std::cout << "Hello";
    return 0;
}