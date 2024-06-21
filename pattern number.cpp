#include <iostream>
#include <vector>
#include <string>

void printLargeNumber(int n) {
    std::vector<std::string> digits[10] = {
        {" ### ",
         "#   #",
         "#   #",
         "#   #",
         " ### "},

        {"  #  ",
         " ##  ",
         "  #  ",
         "  #  ",
         "#####"},
        
        {" ### ",
         "#   #",
         "   # ",
         "  #  ",
         "#####"},
        
        {" ### ",
         "#   #",
         "   # ",
         "#   #",
         " ### "},
        
        {"#   #",
         "#   #",
         "#####",
         "    #",
         "    #"},
        
        {"#####",
         "#    ",
         "#### ",
         "    #",
         "#### "},
        
        {" ### ",
         "#    ",
         "#### ",
         "#   #",
         " ### "},
        
        {"#####",
         "    #",
         "   # ",
         "  #  ",
         " #   "},
        
        {" ### ",
         "#   #",
         " ### ",
         "#   #",
         " ### "},
        
        {" ### ",
         "#   #",
         " ####",
         "    #",
         " ### "}
    };

    std::string num = std::to_string(n);
    for (int i = 0; i < 5; ++i) {
        for (char c : num) {
            std::cout << digits[c - '0'][i] << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    printLargeNumber(number);

    return 0;
}

