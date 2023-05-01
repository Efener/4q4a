#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int& num) {
    num = std::rand() % 100 + 1;
}

int main() {
    std::srand(std::time(nullptr));  //random number generator aka rng

    int x;
        std::cout << "Please give me a number \n";
        std::cin >> x;

    // print original value of x
    std::cout << "Original value: " << x <<  "\n";

    // call swap function
    swap(x);

    // print value of x after calling swap function
    std::cout << "New value: " << x << "\n";

    return 0;
}


