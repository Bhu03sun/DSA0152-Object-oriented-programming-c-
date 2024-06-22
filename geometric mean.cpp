#include <iostream>
#include <cmath>

int main() {
    double num1, num2, num3, num4;

    std::cout << "Enter four numbers: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    double multiplication = num1 * num2 * num3 * num4;
    double geometric_mean = std::pow(multiplication, 0.25);

    std::cout << "Multiplication of the given four numbers: " << multiplication << std::endl;
    std::cout << "Geometric mean of the given four numbers: " << geometric_mean << std::endl;

    return 0;
}

