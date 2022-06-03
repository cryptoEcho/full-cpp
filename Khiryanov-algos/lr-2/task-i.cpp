#include <iostream>

int main(int argc, char* argv[]) {
    int speed;
    // char auto_number[6];
    std::string auto_number;
    int number_goodness;
    int salary = 0;
    // char word[] = "hello";
    // std::cout << word;
    // for(int i = 0; word[i] != '\0'; i++) {
    //     std::cout << word[i] << '\n';
    // }
    std::cin >> speed >> auto_number;
    while (auto_number != "A999AA") {
        if (speed > 60) {
            for(int i = 1; i < 3; i++) {
                if (auto_number[i] == auto_number[i+1]) {
                    number_goodness ++;
                }
                else {
                    number_goodness = 0;
                }
            }
            switch (number_goodness) {
                case 3:  salary += 1000;
                    break;
                case 2:  salary += 500;
                    break;
                case 1:  salary += 100;
                    break;
            }
        }
        std::cin >> speed >> auto_number;
    }
    std::cout << salary << std::endl;
    // for(int i = 0; word[i] != '\0'; i++) {
    //     std::cout << word[i] << '\n';
    // }

    return 0;
}