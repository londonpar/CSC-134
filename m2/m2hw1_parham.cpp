/*
CSC 134
M2HW1 - Homework, Gold
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
    question2();
    question3();
    question4();
    
}
void question1() {
    // list variables: Account name, starting balance, withdrawal amount, annd deposit amount
    string account_name;
    double final_balance;
    double account_balance;
    double deposit_amount;
    double withdrawal_amount;
    int account_number;
    
    // declare account number varible
    account_number = 123456;

    // ask for information 
    cout << "Good afternoon, Please enter the name of your account: " << endl;
    getline(cin, account_name);
    cout << "Enter the amount you have in your starting balance: " << endl;
    cin  >> account_balance;
    cout << "Enter the amount you will be deposting within your account: " << endl;
    cin  >> deposit_amount;
    cout << "Enter the amount you will be withdrawing: " << endl;
    cin  >> withdrawal_amount;
    cout << endl;

    // math for account balance
    final_balance = (account_balance + deposit_amount) - withdrawal_amount;

    // has to display account number as well and info
    cout << setprecision(2) << fixed;
    cout << "Hello, " << account_name << "." << " account number " << account_number << "!" << endl;
    cout << "Your current account balance is " << final_balance << "." << endl;
    cout << endl;

    
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
    cout << "Profit:        $ " << profit << endl;
    cout << endl;
}

void question3() {
    // list variables
    double total_slices;
    double slices_eaten;
    double amount_of_pizzas;
    double slices_per_pizza;
    double total_visitors;
    double leftover_pizza;


    // do the asking
    cout << "How many pizzas are you ordering? " << endl;
    cin  >> amount_of_pizzas;
    cout << "How many slices per pizza are there? " << endl;
    cin  >> slices_per_pizza;
    cout << "How many vistors are coming? " << endl;
    cin  >> total_visitors;

    // the math
    total_slices = amount_of_pizzas * slices_per_pizza;
    slices_eaten = total_visitors * 3;
    leftover_pizza = total_slices - slices_eaten;

    // display the amount
    cout << setprecision(0) << fixed;
    cout << "With a total of " << total_slices << " pizza slices and " << total_visitors << " visitors, " << endl;
    cout << "You will have a leftover of " << leftover_pizza << " pizza slices after the party." << endl;
    cout << endl;
    

}

void question4() {
    // define variables
    string school_name;
    string school_team;
    string chant;

    // identify 
    school_name = "FTCC! ";
    school_team = "Trojans! ";
    chant       = "Let's Go ";

    //inputing the chant

    cout << chant << school_name << endl;
    cout << chant << school_name << endl;
    cout << chant << school_name << endl;
    cout << chant << school_team << endl;

}