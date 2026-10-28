// CSC 134
// M5LAB2 - complete a program
// Parhaml
// 10/28/2026

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

// added some declarations and functions, used m5t1 and m5t2 for ref

int getLength(int num);
int getWidth(int num);
int getArea(int num); // i dont think i need this
void displayData(int length, int width, int area);

int main(){
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

	double length;    // The rectangle's length // fixed semicolons
    double width;     // The rectangle's width
    double area;      // The rectangle's area
          
   /* Get the rectangle's length.
   cout << "Enter the Rectangle's length: ";
   cin  >> length;
   length = getLength(length);
   
   
   // Get the rectangle's width.
   cout << "Enter the Rectangle's width: ";
   cin  >> width;
   width = getWidth(width);
*/
   displayData(length, width, area);

          
   return 0;
}
   
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
int getLength(int num){
    cout << "Enter the Rectangle's length: ";
   cin  >> length;
   length = getLength(length);

}
int getWidth(int num){
    cout << "Enter the Rectangle's width: ";
   cin  >> width;
   width = getWidth(width);

}
int getArea(int num) {
     // Get the rectangle's area.
    return length * width;

}
  
void displayData(int length, int width, int area){
    cout << length << "times" << width << "is " << area << endl;
   }