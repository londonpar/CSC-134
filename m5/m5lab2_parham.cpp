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
// val returning
double getLength();
double getWidth();
double getArea(double length, double width); 

void displayData(double length, double width, double area);

int main(){
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

	double length;    // The rectangle's length // fixed semicolons
    double width;     // The rectangle's width
    double area;      // The rectangle's area

    length = getLength(); // goes to getlength to get info
    width = getWidth();     // goes to getwidth to get info
    area = getArea(length, width);  // goes to getarea to calculate info

    displayData(length, width, area);

   return 0;
}
   
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
double getLength(){
    double length;
    cout << "Enter the Rectangle's length: ";
    cin  >> length;
    return length;
}


double getWidth(){
    double width;
    cout << "Enter the Rectangle's width: ";
    cin  >> width;
    return width;
}
  

 double getArea(double length, double width){
     // Get the rectangle's area.
    return length * width;
}

  // displays information found previously
void displayData(double length, double width, double area){
    cout << "The length is: " << length << endl;
    cout << "The width is: " << width << endl;
    cout << " The area is " << length << " times " << width << " equals " << area << " square feet.";
   }