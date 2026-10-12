// CSC 134
// M4HW - Gold
// Parhaml
// 10/12/26

#include <iostream>
using namespace std;

int main () {
int i = 1;
int table;

cout << "Enter a number from 1 to 12. " << endl;
cin  >> table;
while (table < 1 || table > 12) {
    cout << "This is not a valid response. Try Again: " << endl;
    cin  >> table;
}
while (i <= 12) {
cout << table << " times " << i << " is " << table * i << endl;
    i++;
}

}
