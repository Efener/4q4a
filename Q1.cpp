#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

// inline area calc func
inline double sphere_area(double radius) {
    return 4 * M_PI * radius * radius;
}

int main() {
   const int size = 10; // int size=10 didn't work
    double radius_arr[size];
    int num_spheres = 0;

    std::cout << "Enter the radius of each sphere (enter a negative number to stop):" << "\n";

    // loop to get the radius
    while ( 1 ){
        double radius;
        std::cin >> radius;

        if (radius < 0) {
            break;
        }

        radius_arr[num_spheres] = radius;
        num_spheres++;
    }

    // calculate and print the area of each sphere using the inline function
    std::cout << "Area of spheres: " << "\n";
    for (int i = 0; i < num_spheres; i++) {
        double area = sphere_area(radius_arr[i]);
        std::cout << "Sphere " << i + 1 << ": " << area << "\n";
    }


    std::cout << "Efe Fener was here :)";
    return 0;
}
