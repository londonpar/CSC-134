// CSC 134
// M3LAB2 - Letter Grades
// Parhaml
// 9/30/2026
// COnvert number grades to letteer grades

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the number grade to letter grade program conversion program." << endl << endl;
    cout << "Enter a number grade (0-100): ";

    // Declare variables
    int num_grade;
    char letter_grade; // only one letter long; uses single quotes like 'A' , not "A"

    cin >> num_grade;
    cout << "You entered: " << num_grade << endl;
    // Calculation -- find the letter grade
    // I will use if/ else if/ else if / ... / else
    // nestion would also work
    if (num_grade >= 90) {
        letter_grade = 'A';
    }
    else if (num_grade >= 80) {
        letter_grade = 'B';
    }
    else if (num_grade >= 70) {
        letter_grade = 'C';
    }
    else if (num_grade >= 60) {
        letter_grade = 'D';
    }
    else {
        letter_grade = 'F';
    }


    //output 
    cout << "Number Grade: " << num_grade << endl;
    cout << "Letter Grade: " << letter_grade << endl;

    return 0;
}