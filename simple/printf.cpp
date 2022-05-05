// work with function printf
#include <iostream>

void my_print(int v) {
    printf("Output: %d", v);
}

void my_print(unsigned int v, char type) {
    if (type == 'u') {
        printf("Output: %u", v);
    }
    else {
        printf("Output: %o", v);
    }
}

void my_print() {
    printf("Output: %%");
}