// CSC 134
// M5HW - Gold
// Parhaml
// 11/2/2026


#include <iostream>
#include <limits> // helps with pickning valid choices
#include <iomanip> // helps with set precision
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
    cout << "1. Question1" << endl;
    cout << "2. Question2" << endl; 
    cout << "3. Question3" << endl;
    cout << "4. Question4" << endl;
    cout << "5. Question5" << endl;
    cout << "6. [Exit]" << endl;
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
        cout << "Okay going back to Main Menu." << endl;
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
    
}

void question3(){
}

void question4(){
}

void question5(){
}

// from m5lab1
int get_valid_choice(int highestChoice) {
	int choice = 0;

	do {
		cout << "Choose: ";

		if (!(cin >> choice)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			choice = 0;
		} else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		if (choice < 1 || choice > highestChoice) {
			cout << "Invalid choice. Try again." << endl;
		}
	} while (choice < 1 || choice > highestChoice);

	return choice;
}


