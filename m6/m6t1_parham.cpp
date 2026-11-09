/*
CSC 134
M6T1 - Loops and Arrays
parahml
11/9/26
First try: No arrays
*/

#include <iostream>
using namespace std;

// declare functions
void method1();
void method2();
void method3();
// main
int main() {
    // count # of pokemon per day, two diffeent waays
    method1();
    method2();
    method3();

    return 0;
}

void method1(){
    string item = "fish";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for 5 days
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    double average = 0;
    // get input, add to total

    for (int i=0; i < SIZE; i++){
        cout << "Day " << i+1 << ": "; // print days 1-5, not 0-4
        cin >> counts[i];
        total += counts[i];
    }

    // displays info

    cout << "Total " << item << " seen: " << total << endl;
    average = (double) total / SIZE;
    cout << "Average per day: " << average << endl;
    cout << item << " caught per day: " << endl;
    for (int i=0; i < SIZE; i++){
        cout << "Day " << i+1 << ": " << counts[i] << endl;
    }
}

void method2(){
    string item = "fish";
    cout << "Count how many " << item << " were seen each day." << endl;
    // count for five days
    const int SIZE = 5;
    int total = 0;
    int today;
    double average = 0;
    // Get the input, add to total
    for (int i=0; i < SIZE; i++){
        cout << "Day " << i+1 << ": ";
        cin >> today;
        total += today;
    }
      cout << "Total " << item << " seen: " << total << endl;
      average = (double) total / SIZE;
      cout << "Average per day: " << average << endl;
}

void method3(){
// Range based for loop
// cannot buffer overflow, because we dont handle the index ourselves
const int SIZE = 5;
int counts[SIZE] = {0, 0, 0 ,0 ,0};
cout << "Count fish per day" << endl;
// This loop changes the array, so needs refrence & symbol
for (int& count : counts){
    // "for count, in counts"
    cout << "> ";
    cin >> count;
}
// now do total and average
int total = 0;
double average = 0;
// NOTE: this loop only readys values, doesnt' need the &
for (int count : counts){
    total+=count;
}
average = (double) total/ SIZE;
cout << "Total: " << total << endl << "Average: " << average << endl;
}