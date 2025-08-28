// raw.cpp - GPA calculation logic
// Author: Jay Prakash Biswal

/*Hi This is Jay prakash and this project is in optimization state
Last updated - 16th Nov 2022*/
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

// Mapping grades to grade points
map<char, double> gradePoints = {
    {'A', 10}, {'B', 9}, {'C', 8}, {'D', 7}, {'E', 6}, {'F', 0}
};

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

void showMethod() {
    cout << "\n--- Methodology ---\n";
    cout << "GPA = (Sum of (Grade Point × Credit)) / (Sum of Credits)\n";
    cout << "CGPA = (Sum of GPA of all semesters) / (Number of semesters)\n";
    cout << "Grade Points: A=10, B=9, C=8, D=7, E=6, F=0\n\n";
}

int main() {
    int choice;
    do {
        cout << "\n----------------------\n";
        cout << " GPA & CGPA Calculator (Developed by Jay prakash Biswal_Optimization state)\n";
        cout << "----------------------\n";
        cout << "1. Calculate GPA\n";
        cout << "2. Calculate CGPA\n";
        cout << "3. Methodology\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double gpa = calculateGPA();
                cout << "Your GPA is: " << fixed << setprecision(2) << gpa << "\n";
                break;
            }
            case 2: {
                double cgpa = calculateCGPA();
                cout << "Your CGPA is: " << fixed << setprecision(2) << cgpa << "\n";
                break;
            }
            case 3:
                showMethod();
                break;
            case 4:
                cout << "Exiting application...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}