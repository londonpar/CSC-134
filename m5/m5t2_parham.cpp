// CSC 134
// M5T2 - More Practice with Functions
// Parhaml
// Partner: Jazmin T
// 10/21/26

#include <iostream>
using namespace std;

// Prototype: Declare functions here, define them under main.
int square(int num);                        // does math
void printAnswerLine (int number, int squared);     // prints full line of table


int main() {
    cout << "Table of Squares Program" << endl;
    for (int i = 1; i <= 10; i++) {         // just tells what range of numbers we using
      int squared = square(i);         // squares the number thats picked, for example if it gets 1 for i then it'll go to intsquare to sqaure it and then print out later
      printAnswerLine(i, squared);     // this prints out the line at the bottom over and over
    }
}

// Define Functions here
int square(int num) {
    // Does math -- input an integer, output that integer squared
    return num * num; // dont do return 0 bc it just gives 0
}

void printAnswerLine(int number, int squared){
    // Print one line of the able of squares
    /* Example output:
      3           9
    */
   cout << number << " squared is " << squared << endl;
}