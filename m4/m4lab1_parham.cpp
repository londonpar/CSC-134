// CSC 134
// M4 LAB 1
// parhaml
// 10/12/2026
// Draw boxes with text

#include <iostream>
using namespace std;

int main() {
    string token = "✨"; // use any character you want
    // const int WIDTH = 5;
    // const int HEIGHT = 5;
    // Get Validated Values
    int width = 0;
    int height = 0;
    while (width <= 0 || height <= 0 ) {
        cout << "Enter rectangle width: ";
        cin  >> width;
        cout << "Enter rectangle height: ";
        cin  >> height;
        // optional: complain
        if (width <=0){
            cout << "width cannot be zero or negative." << endl;
        }
        if (height <=0){
            cout << "Height cannot be zero or negative. " << endl;
        }
    } 

    // First part: Printing one row
    cout << "Part 1 " << endl;
    for (int i = 0; i < width; i++) {
        cout << token << " "; // adding a space
    }
    cout << endl; // end the row

    cout << "Part 2 " << endl;
    // Next Part: prining one column
     for (int j = 0; j < height; j++) {
        cout << token << endl;

     }

     cout << "Here is your rectangle " << width << " by " << height << endl;
     // Full rectangle: print height number of rows.
     // each row is width long
     for (int j = 0; j < height; j++) {
        // draw one full row
          for (int i = 0; i < width; i++) {
        cout << token << " "; // adding a space
       } // (repeat width times)
        cout << endl; // end the row
     } // (repeat height times)

}
