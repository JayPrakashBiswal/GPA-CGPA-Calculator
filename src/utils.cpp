// utils.cpp - GPA calculation logic
// Author: Jay Prakash Biswal

#include <iostream>
#include "../include/utils.h"

std::map<char, double> gradePoints = {
    {'A', 10}, {'B', 9}, {'C', 8}, {'D', 7}, {'E', 6}, {'F', 0}
};

void showMethod() {
    std::cout << "\n--- Methodology ---\n";
    std::cout << "GPA = (Sum of (Grade Point × Credit)) / (Sum of Credits)\n";
    std::cout << "CGPA = (Sum of GPA of all semesters) / (Number of semesters)\n";
    std::cout << "Grade Points: A=10, B=9, C=8, D=7, E=6, F=0\n\n";
}
