// CSC 134
// Module 3 HW (M3HW1) - Gold
// parhaml
// 9/30/2026

#include <iostream>
#include <iomanip>
#include <cstdlib>  // for random
#include <ctime>  
#include <cmath>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main(){
    question1();
    question2();
    question3();
    question4();
}

void question1(){
string choice;
cout << "Hello, I'm C++ Program!" << endl;
cout << "Do you like me? Please type yes or no." << endl;
cin  >> choice;
if ("yes" == choice) {
    cout << "That's great! I'm sure we'll get along." << endl;
}
else if ("no" == choice) {
    cout << "Well, maybe you'll learn to like me later" << endl;
}
else {
    cout << "If you're not sure.. that's okay." << endl;
}
cout << endl;
}

void question2(){
    string meal_name;      
    double meal_price;         // $
    int choice;
    double tip_rate;        // percent
    double tax_rate;        // Percent
    double tax_amount;      // $
    double total;           // $, meal + tax + tip
    double tip_amount;
    double total2;           // no tip total


    // input of info
    meal_name = "#1 Combo";
    tip_rate = 0.15;
    tax_rate = 0.08;



    // ask to enter price of meal
    cout << "What is the price of your meal?" << endl;
    cin  >> meal_price;

    // math
    tax_amount = meal_price * tax_rate;
    tip_amount = meal_price * tip_rate;
    total      = meal_price + tax_amount + tip_amount;
    total2     = meal_price + tax_amount;

    // dining in or taking out?
    cout << "Please press 1 to dine-in or 2 to take out." << endl;
    cin  >> choice;
    cout << endl;
     if (choice == 1) {

        string line = "-----------------------";
    cout << line << endl;
    // set width of columns and set two decimal places
    // requires up top this line: include <iomanip>
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << " tax: " << setw(10) << tax_amount << endl;
    cout << setw(20) << " tip: " << setw(10) << tip_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;

    }
    else if (choice == 2) {
          string line = "-----------------------";
    cout << line << endl;
    // set width of columns and set two decimal places
    // requires up top this line: include <iomanip>
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << " tax: " << setw(10) << tax_amount << endl;
     cout << setw(20) << " tip: " << setw(10) << "0.00" << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total2 << endl;
    cout << "Thank You Come Again" << endl << endl;
    }
cout << endl;

}

void question3(){
int choice;
int choice2;
cout << "Late at night someone knocks on your door, they asked to be let in because they are being chased by a monster." << endl;
cout << "What do you do?" << endl;
cout << "1. Let them in." << endl;
cout << "2. Ignore it and go back to bed" << endl;
cin  >> choice;

if (choice == 1){
    cout << "You let them in and they thank you." << endl;
    cout << "You soon both hear several bangs on your door. What do you do?" << endl;
    cout << "1. Call the police." << endl;
    cout << "2. Look in the peephole." << endl;
    cin  >> choice2;
    if (choice2 == 1){
        cout << "The police weren't able to find the monster." << endl;
        cout << "You saved the person from being taken by the monster. You Win!" << endl;
    }
     else if (choice2 == 2){
        cout << "The monster makes eye contact and smiles. It disappears before you can react." << endl;
        cout << "The next day, your family calls about your disappearance. You saved the person but what happened to you?" << endl;
    }
    else {
        cout << "This is not a valid option." << endl;
    }
}
else if (choice == 2){
    cout << "The banging stops and you go back to bed, but there's a sound coming from outside your bedroom door." << endl;
    cout << "The next day, your parents call about your disappearance." << endl;
}
else {
    cout << "This is not a valid option." << endl;
}
cout << endl;
}

void question4(){
int answer;
srand(time(0)); 
const int MAX_NUM = 9;
int number1 = (rand() % MAX_NUM);  
int number2 = (rand() % MAX_NUM);
int total;

total = number1 + number2;
cout << "What is " << number1 << " + " << number2 << "? " << endl;
cin  >> answer;

if (answer == total) {
    cout << "Correct!" << endl;
}
else {
    cout << "Incorrect." << endl;
}
cout << endl;
}