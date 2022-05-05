#include "mylib.hpp"

const int MAX_DIVISORS_NUMBER = 10000;

int main(int argc, char* agrv[]) {
    int number = read_number();

    int Divisor[MAX_DIVISORS_NUMBER];
    int Divisor_top = 0;
    factorize(number, Divisor, &Divisor_top);

    print_array(Divisor, Divisor_top);
    return 0;
}