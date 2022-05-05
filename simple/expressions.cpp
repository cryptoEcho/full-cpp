#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;

// int sin(double x) {
//     return 3.14 * x;
// }

double f(double x);
int fact(int k);

int main() {
    double x;
    cout << "Enter a number for sinus evaluation.\n";
    cin >> x;

    double s = 0;
    int n;
    cout << "Enter Taylor series accuracy\n";
    cin >> n;
    cout << pow(-1, 2);
    for (int k = 0, factor = 1; k < n; k++) {
        s += pow(-1, k) * pow(x, 2*k + 1) / factor;
        factor *= k * (k+1);

    }
    
    cout << "Math function:\t" << f(x) << endl;
    cout << "Our Taylor series function:\t" << s << endl;

    return 0;
}

/**
 * @brief 
 * 
 * @param k 
 * @return int 
 */
int fact(int k) {
    if (k == 0) {
        return 1;
    }
    return k * fact(k - 1);
}

double f(double x) {
    return 2 * sin(x);
}