/*Hi This is Jay prakash and this project is in optimization state
Last updated - 28th Aug 2025*/
/**************************************************************
 * Project: GPA & CGPA Calculator
 * Author : Jay Prakash Biswal
 * Email  : your-email@example.com
 * Date   : 28-Aug-2025
 * Description:
 *     A console-based C++ application to calculate GPA
 *     (Grade Point Average) and CGPA (Cumulative GPA)
 *     for multiple subjects and semesters.
 **************************************************************/


#include <iostream>
#include <iomanip>
#include "../include/gpa.h"
#include "../include/cgpa.h"
#include "../include/utils.h"
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n----------------------\n";
        cout << " GPA & CGPA Calculator(Developed by Jay prakash Biswal_Optimization state)\n";
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
