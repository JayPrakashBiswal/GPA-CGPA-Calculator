// gpa.cpp - GPA calculation logic
// Author: Jay Prakash Biswal

#include <iostream>
#include "../include/gpa.h"
#include "../include/utils.h"
using namespace std;

double calculateGPA() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;
    double totalPoints = 0, totalCredits = 0;

    for (int i = 1; i <= n; i++) {
        char grade;
        double credit;
        cout << "Enter grade (A-F) for subject " << i << ": ";
        cin >> grade;
        cout << "Enter credits for subject " << i << ": ";
        cin >> credit;

        if (gradePoints.find(grade) != gradePoints.end()) {
            totalPoints += gradePoints[grade] * credit;
            totalCredits += credit;
        } else {
            cout << "Invalid grade entered. Try again.\n";
            i--;
        }
    }
    return totalPoints / totalCredits;
}
