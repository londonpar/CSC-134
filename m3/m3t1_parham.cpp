// CSC 134
// M3T1 - Comparing Areas
// Parhaml
// Get area of two rectangles, find the largest one.

#include <iostream>
using namespace std;

int main(){
    // declare variables for each rectable
    double length1, width1, area1;
    double length2, width2, area2;

    // Input: ask for length and width of both
    cout << "First rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length1;
    cout << "\twidth  ? ";
    cin  >> width1;

    cout << "Second rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length2;
    cout << "\twidth  ? ";
    cin  >> width2;



    // calc: find area of both
    area1 = length1 * width1;
    area2 = length2 * width2;

    // output: print the areas
    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "Rectangle 2 is area: " << area2 << endl;

    // TODO: tell the user whcih one is larger (more area)
    // If statements test for true or false
    
    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectable 2 is larger. " << endl;
    }
    else { 
        cout << "They are the same size." << endl;
    }

    return 0;
}