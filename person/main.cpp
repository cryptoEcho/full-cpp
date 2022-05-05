#include <iostream>
#include <string>
#include "person.h"

using namespace std;


int main(int argc, char* args[]) {
    Person* person = new Person("Name");
    cout << "Hello " << person->getName() << endl;
    delete person;
    int y = foo(2);
    return 0;
}