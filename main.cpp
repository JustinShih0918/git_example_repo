// give me a cpp file that can print hello world
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    // random number, if it is 1 , cout dit
    if (rand() % 2 == 1) {
        std::cout << "dit" << std::endl;
    }
    return 0;
}