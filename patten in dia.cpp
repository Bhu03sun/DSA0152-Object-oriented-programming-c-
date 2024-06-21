#include <iostream>
#include <string>
using namespace std;

class DiamondPattern {
private:
    string word;
    int length;

public:
    DiamondPattern(string w) : word(w), length(w.length()) {}

    void printPattern() {
        int n = length;
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j > i; --j) cout << " ";
            for (int j = 0; j <= i; ++j) cout << word[j];
            for (int j = i - 1; j >= 0; --j) cout << word[j];
            cout << endl;
        }
        for (int i = n - 2; i >= 0; --i) {
            for (int j = n - 1; j > i; --j) cout << " ";
            for (int j = 0; j <= i; ++j) cout << word[j];
            for (int j = i - 1; j >= 0; --j) cout << word[j];
            cout << endl;
        }
    }
};

int main() {
    DiamondPattern dp("SAVEETHA");
    dp.printPattern();
    return 0;
}

