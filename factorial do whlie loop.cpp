#include <iostream>

int main() {
    int n, factorial = 1, i = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;

    do {
        factorial *= i;
        ++i;
    } while (i <= n);

    std::cout << "The factorial of " << n << " is " << factorial << std::endl;

    return 0;
}

