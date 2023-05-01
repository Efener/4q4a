#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

void swap_with_file(int& num, std::string filename) {
    std::ifstream file(filename);  //ifstream to open a file in read

    int num_lines = 0;
    std::string line;
    while (std::getline(file, line)) {   //Getting the number of lines using getLine function via fstream library.
        num_lines++;
    }


    file.close();
    file.open(filename);
    //close the file and open again.

    int rand_line = std::rand() % num_lines;   // generate random line number by using srand
    for (int i = 0; i < rand_line; ++i) {
        std::getline(file, line);    // go to the selected random line and take the number inside of it.
    }
    num = std::stoi(line);  // converts the line(it's a string) to int.

    // close file
    file.close();
}

int main() {
    std::srand(std::time(nullptr));

    int x;
    std::cout << "Please enter a integer value:\n";
    std::cin >> x;

    std::cout << "Original value: " << x << "\n";

    swap_with_file(x, "numbers.txt");

    std::cout << "New value: " << x << "\n";
    std::cout << "Heh heh heh Efener was here";

    return 0;
}

