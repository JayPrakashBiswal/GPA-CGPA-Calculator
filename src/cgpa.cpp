#include <iostream>
#include "../include/cgpa.h"
using namespace std;

double calculateCGPA() {
    int semesters;
    cout << "Enter number of semesters: ";
    cin >> semesters;
    double sumGPA = 0;

    for (int i = 1; i <= semesters; i++) {
        double gpa;
        cout << "Enter GPA of semester " << i << ": ";
        cin >> gpa;
        sumGPA += gpa;
    }
    return sumGPA / semesters;
}
