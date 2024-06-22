#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, remainder, sum = 0;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, 3);
        originalNum /= 10;
    }

    if (sum == num) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

