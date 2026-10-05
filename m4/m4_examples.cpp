/*
CSC 134
M4 Warmup Examples
practice loops
*/


#include <iostream>
using namespace std;

int main() {
    // infinte loop, or never starts?
    bool done = true;  // or true
    while (done == false) {
        cout << "Still...going...";
    }
    // counting loop
    int count = 1;
    while (count < 6){
        cout << "count is: " << count << endl;
        count++; // increment AFTER showing the number
    }

    bool is_valid = false;
    int number;
    while (false == is_valid) {
        cout << "Enter number from 1-5: ";
        cin >> number;
        if (number < 1) {
            cout << "Too Low!" << endl;
        }
        else if ( number > 5) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "You entered: " << number << endl;
            is_valid = true; // we're done, stops on next loop
         }
    }
    
    return 0;
}
