#include <iostream>

char calculateGrade(int cam, int mte, int ca, int ia, int ete) {
    int totalMarks = cam + mte + ca + ia + ete;

    if (totalMarks >= 85) {
        return 'A';
    } else if (totalMarks >= 80) {
        return 'A';
    } else if (totalMarks >= 70) {
        return 'B';
    } else if (totalMarks >= 65) {
        return 'B';
    } else if (totalMarks >= 55) {
        return 'C';
    } else if (totalMarks >= 33) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int cam, mte, ca, ia, ete;

    std::cout << "Enter Class Attendance marks (out of 10): ";
    std::cin >> cam;
    std::cout << "Enter Midterm Exam marks (out of 20): ";
    std::cin >> mte;
    std::cout << "Enter Class Assignment marks (out of 10): ";
    std::cin >> ca;
    std::cout << "Enter Internal assessment marks (out of 10): ";
    std::cin >> ia;
    std::cout << "Enter End-term Exam marks (out of 50): ";
    std::cin >> ete;

    char grade = calculateGrade(cam, mte, ca, ia, ete);
    std::cout << "Grade is: " << grade << std::endl;

    return 0;
}

