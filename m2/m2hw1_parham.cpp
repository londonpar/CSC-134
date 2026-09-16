/*
CSC 134
M2HW1 - Homework (4 questions max)
Parham
9/16/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();



int main () {
    // Run only the questions you finish by removing the //
     question1();
    // question2();
    // question3();
    // question4();
    
}
void question1() {
    // list variables: Account name, starting balance, withdrawal amount, annd deposit amount
    string account_name;
    string account_number;
    double account_balance;
    double deposit_amount;
    double withdrawal_amount;

    account_name = "John Pork";
    account_number = "1234567";


    




}

void question2() {
    const double  COST_PER_CUBIC_FOOT = 0.3;
    const double  CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length, width, height;
    double crate_cost;
    double volume;
    double crate_charge;
    double profit;
    
    // Get dimensions
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin  >> length; 
    cout << "Crate width: ";
    cin  >> width;
    cout << "Crate height: ";
    cin  >> height;
    
    // Calc volume
    volume = length * width * height;

    // calc price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    // calc profit
    profit = crate_charge - crate_cost;

    // results
    cout << setprecision(2) << fixed;
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << endl;
    cout << "Cost to build: $ " << crate_cost << endl;
    cout << "Sells for:     $ " << crate_charge << endl;
    cout << "Profit:        $ 5" << profit << endl;

}

void question3() {
    cout << "Question 3 goes here" << endl;
}

void question4() {
    cout << "Question 4 goes here" << endl;
}