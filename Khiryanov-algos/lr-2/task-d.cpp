// check if the given number is a result of powered 2

#include <iostream>
// #include <chrono>

void pow_two_1(int n);
void pow_two_2(int n);

int main() {
    // Read the natural number from user
    int n;
    std::cin >> n;

    // check the time for the first approach
    // auto start = std::chrono::high_resolution_clock::now();
    pow_two_1(n);
    // auto stop = std::chrono::high_resolution_clock::now();
    // auto duration_1 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    
    // // check the time for the second approach
    // start = std::chrono::high_resolution_clock::now();
    // pow_two_2(n);
    // stop = std::chrono::high_resolution_clock::now();
    // auto duration_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

    // // show the results
    // std::cout << "Time taken by function \"pow_two_1\": "
    //           << duration_1.count() << "microseconds\n";

    // std::cout << "Time taken by function\"pow_two_2\": "
    //           << duration_1.count() << "microseconds\n";


    return 0;
}

void pow_two_1(int n) {
    for (int i = 2; i < n+1; i *= 2) {
        if (n % i != 0) {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}

void pow_two_2(int n) {
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}