#ifndef MY_LIBRARY_H_INCLUDED
#define MY_LIBRARY_H_INCLUDED

#include <cstdlib>

// get the number from user
int read_number();

// get the prime numbers | divisors
void factorize(int number, int *Divisor, int *Divisor_top);

void print_number(int number);

void print_array(int A[], size_t A_size);

#endif