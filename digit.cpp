#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;
    
    cout << "Enter a number: ";
    cin >> number;
    
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    
    cout << "Sum of digits: " << sum;
    
    return 0;
}


