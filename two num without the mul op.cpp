#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int result = 0;
    int multiplier = a;
    int multiplicand = b;

    if (multiplicand < 0) {
        multiplier = -multiplier;
        multiplicand = -multiplicand;
    }

    for (int i = 0; i < multiplicand; ++i) {
        result += multiplier;
    }

    std::cout << a << " * " << b << " = " << result << std::endl;

    return 0;
}

