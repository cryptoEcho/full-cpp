#include <iostream>

int main() {
    int n;
    // we get top boundary from user
    std::cout << "Enter the top boundary for sieve of Eratosthenes: ";
    std::cin >> n;
    bool sieve[n+1]; // create array of boolean elements
    for (int i = 2; i <= n; i++) {
        /* not to interpret 0 and 1-st elements - 
        not prime numbers nor composite numbers */
        sieve[i] = true;
    } // all elements in array are true

    int x = 2;
    while (x*x <= n) { // we stop when we reach n^2
        if (sieve[x]) { // found new prime number
            for (int y = x*x; y <= n; x == 2 ? y += x : y += 2*x) {
                sieve[y] = false; // composite
            }
        }
        x += 1;
    }

    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {
            std::cout << i << '\t';
        }
    }
    std::cout << '\n';
    return 0;
}