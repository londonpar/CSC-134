// CSC 134
// M5HW - Gold
// Parhaml
// 11/2/2026


#include <iostream>
#include <limits> // helps with pickning valid choices
#include <iomanip> // helps with set precision
#include <cmath> // helps with square root
using namespace std;

void main_menu();
void question1();
void question2();
void question3();
void question4();
void question5();
int get_valid_choice(int HighestChoice);

int main(){
    // menu based program
    cout << "Module 5 Homework" << endl;
    main_menu();
    
    return 0;
}

void main_menu(){
    // m5lab1 refrence
    cout << "Enter a number, 1-5 for a question" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl; 
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "5. Question 5" << endl;
    cout << "6. [Exit]" << endl;
    cout << "Choose: ";
    int choice = 0;
// followed m5lab information for choosing valid choices
    choice = get_valid_choice(6);
    if (1 == choice){
        question1();
    }
    else if (2 == choice){
        question2();
    }
    else if (3 == choice){
        question3();
    }
    else if (4 == choice){
        question4();
    }
    else if (5 == choice){
        question5();
    }
    else if (6 == choice){
        return;
    }
    else {
        cout << "That's not a valid choice. Try Again.";
        main_menu();
    }


}

void question1(){
    string month1;
    string month2;
    string month3;
    double rainfall1; // in inches
    double rainfall2; // in inches
    double rainfall3; // in inches
    double average; // going to take all rainfalls and add + divide

    // asking user questions for info
        cout << "Enter the month: ";
        cin  >> month1;
        cout << "Enter the amount of rainfall for " << month1 << ": ";
        cin  >> rainfall1;
        cout << "Enter another month: ";
        cin  >> month2;
        cout << "Enter the amount of rainfall for " << month2 << ": ";
        cin  >> rainfall2;
        cout << "Enter another month: ";
        cin  >> month3;
        cout << "Enter the amount of rainfall for " << month3 << ": ";
        cin  >> rainfall3;

    // do math to find average
        average = (rainfall1 + rainfall2 + rainfall3)/ 3.0;

    // Display averages of doubles
        cout << setprecision(2) << fixed; // helps do rounded to two decimal places
        cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;

return main_menu();
}

void question2(){

// declare and ask
double width = 0;
double length = 0;
double height = 0;
double volume;

// input validation, m4lab1
while (width <= 0|| length <= 0 || height <=0){
  cout << "Enter the Rectangle's Width: ";
  cin  >> width;
  cout << "Enter the Rectangle's Length: ";
  cin  >> length;
  cout << "Enter the Rectangle's Height: ";
  cin  >> height;
    if (width <=0){
            cout << "Width cannot be zero or negative." << endl;
        }
    if (length <= 0){
        cout << "Length cannot be zero or negative." << endl;
    }
    if (height <=0){
            cout << "Height cannot be zero or negative. " << endl;
        }
}
// math of volume
volume = length * width * height;
    
// display info
    cout << "The Rectangle's width is: " << width << endl;
    cout << "The Rectangle's height is: " << height << endl;
    cout << "The Rectangle's length is: " << length << endl; 
    cout << "The volume of the rectangle is: " << volume << endl;
}


void question3(){
    int number = 0;
    cout << "Enter a number (1 - 10): ";
    cin  >> number;
while (number < 1 || number > 10){
    cout << "This is not a valid response. Try Again: " << endl;
    cin  >> number;
}

// had to search to know how input roman numbers, using Lunabot on codespace
string roman[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
 cout << "The Roman numeral version of " << number << " is " << roman[number - 1] << endl;
}

void question4(){
    int choice = 0;
    double radius;
    double area;
    double pi;
    pi = 3.14159;
    double length;
    double width;
    double base;
    double height;


    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle " << endl;
    cout << "2. Calculate the Area of a Rectangle " << endl;
    cout << "3. Calculate the Area of a Triangle " << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
   choice = get_valid_choice(4);

    if (1 == choice){
        cout << "Enter is the radius of the circle: " << endl;
        cin  >> radius;
        if (radius <= 0){
            cout << "The radius cannot be less than zero." << endl;
        }

    // math
    area = pi * sqrt(radius); // sqaure root
    // display
    cout << "The area is " << area << endl;
        
    }
    else if (2 == choice){
        cout << "Enter the Rectangle's length: ";
        cin  >> length;
        cout << "Enter the Rectangle's width: ";
        cin >> width;
        // input validation
        if (length <= 0){
            cout << "The length cannot be negative or zero." << endl;
        }
        if (width <= 0){
            cout << "The width cannot be negaitve or zero." << endl;
        }
    // math
    area = length * width;
    // display
    cout << "The area is " << area << endl;
    }
    
    else if (3 == choice){
        while (base <=0 || height <=0){
        cout << "Enter the length of the Triangle's base ";
        cin >> base;
        cout << "Enter the Triangle's height: ";
        cin >> height;
            if (base <= 0){
            cout << "Only enter postive values for base and height." << endl;
        }
        if (height <= 0){
            cout << "Only enter postive values for base and height." << endl;
        }
    // math
    area = base * height * .5;
    //display
    cout << "The area is " << area << endl;

    }
}
    else if (4 == choice){
      cout << "Quitting."<< endl;
      return;
    }

    else {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those."<< endl;
    }
}


void question5(){
}

// from m5lab1
int get_valid_choice(int highestChoice) {
	int choice = 0;

	do {
		if (!(cin >> choice)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			choice = 0;
		} else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		if (choice < 1 || choice > highestChoice) {
			cout << "Invalid choice. Try again: ";
		}
	} while (choice < 1 || choice > highestChoice);

	return choice;
}

