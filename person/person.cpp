#include "person.h"

using namespace std;

Person::Person(string theName) {
    this->name = theName;
}

string Person::getName() {
    return this->name;
}

int foo(int x) {
    return 5 * x;
}