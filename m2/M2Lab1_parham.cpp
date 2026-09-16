/*
CSC 134
M2LAB1 - Crates
Parham
9/16/26
Exercise 3.11 from Gaddis
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() { 

    // Declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIS_FOOT = 0.50;
    // varibles describing the crate
    double length, width, height;
    double crate_cost;
    double volume;                           // V = l * w * h, in cubic ft.
    double crate_charge;
    double profit;



    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin  >> length;
    cout << "Crate width:  ";
    cin  >> width;
    cout << "Crate height: ";
    cin  >> height;
    
    // Calculate the volume (everything else depends on this value)
    volume = length * width * height;       // cubic feet
    
    // Calculate the price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIS_FOOT * volume;

    // Calculate profit (price - cost)
    profit = crate_charge - crate_cost;     // what they pay us, minus what we spent

    // Display results to user
    cout << setprecision(2) << fixed;   // two decimals for values
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << endl;
    cout << "Cost to build: $ " << crate_cost << endl;
    cout << "Sells for:     $ " << crate_charge << endl;
    cout << "Profit:        $ 5" << profit << endl;

    return 0; // no errors
}
