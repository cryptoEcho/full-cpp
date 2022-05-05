#include <iostream>

using std::cout;
using std::endl;

// void size(int variable) {
//     cout << sizeof
// }

int var() {
    cout << "int\n";
    int x;
    x = 2147483648;
    cout << typeid(x).name() << endl;
    cout << x << endl;
    cout << sizeof(x) << endl << endl;

    cout << "unsigned int\n";
    unsigned int y; // 4 bytes for this variable [-2b, 2b]
    y = 2147483648;
    cout << y << endl;
    cout << sizeof(y) << endl << endl;

    cout << "long\n";
    long z;
    z = 2147483648;
    cout << z << endl;
    cout << sizeof(z) << endl << endl;

    cout << "long long:\n";
    long long a;
    a = 2147200000000000000;
    cout << a << endl;
    cout << sizeof(a) << endl << endl;

    cout << "short:\n";
    short h = 739;
    cout << h << endl;
    cout << sizeof(h) << endl << endl;

    char b, d = 65;
    char e = 'A';
    cout << "Characters:\n";
    cout << b << d << e << endl;
    cout << sizeof(b) << endl << endl;


    return 0;
}

int main() {
    
    return var();
}