#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of terms should be greater than zero." << endl;
    } else {
        cout << "Fibonacci Series up to " << n << " terms : ";
        for (int i = 1; i <= n; ++i) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
