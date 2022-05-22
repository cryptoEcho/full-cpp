#include <iostream>

struct t_Pair {
    uint64_t a;
    int b;
};

t_Pair return_pair(int x) {
    t_Pair result;
    result.a = x * x;
    result.b = x * x * x;
    return result;
}

int main() {
    uint64_t x;
    std::cin >> x;

    t_Pair pair_ = return_pair(x);
    std::cout << pair_.a << ' ' << pair_.b << std::endl;

    return 0;
}