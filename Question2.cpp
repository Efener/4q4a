#include <iostream>

//  pass by value
int squareByValue(int num);

//  pass by reference
void squareByReference(int &num);

int main() {
    int num1, num2,orgnum2; //To save the first original input of the num2 I created an int
    std::cout << "Enter 2 integers: \n";
    std::cin >> num1 >> num2;

    // call squareByValue function
    int result1 = squareByValue(num1);
    std::cout << "Square by value of " << num1 << " is " << result1 << "\n";

    // call squareByReference function
    orgnum2 = num2; // We save num2 to show the change of num2
    squareByReference(num2);
    std::cout << "Square by reference of " << orgnum2 << " is " << num2 << "\n";

    return 0;
}

// function definition with pass by value
int squareByValue(int num) {
    return num * num;
}

// function definition with pass by reference
void squareByReference(int &num) {
    num = num * num;
}