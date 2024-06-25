#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    int id;
    std::vector<int> grades;

public:
    Student(std::string n, int i) : name(n), id(i) {}

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    void display() const {
        std::cout << "Student ID: " << id << "\nName: " << name << "\nGrades: ";
        for (std::vector<int>::const_iterator it = grades.begin(); it != grades.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Student s("John Doe", 1);
    s.addGrade(90);
    s.addGrade(85);
    s.display();
    return 0;
}

