// CSC- 134
// M2LAB1 - Product Sales
// Parham, L
// 9/9/26
// Interactice program with input

#include <iostream>
using namespace std;

int main () {
    // Set Up variables
    string product_name;
    int product_count;
    double product_price; // $USD, per item
    // Variables for customer side
    int purchase_count;
    double purchase_total;

    // Get input -- set up the store
    cout << "STORE SETUP" << endl;
    cout << "Product Name: ";
    cin  >> product_name;
    cout << "Item Count:   ";
    cin  >> product_count;
    cout << "Price Each:  $";
    cin  >> product_price;

    // Get input -- Greet user, get their order
    cout << "-----------------------" << endl << endl;
    cout << "WELCOME, CUSTOMER." <<endl;
    cout << "Welcome to the " << product_name << " shop." << endl;
    cout << "Our " << product_name << " (s) are $" << product_price << " each." << endl;

    cout << " How many would you like to buy today? ";
    cin  >> purchase_count;


    // Do the processing
    // Note: we dont verify the user input -- they can buy more than we have, or a neagtive amount.
    // this will be fixed in the Loops module.
    purchase_total = purchase_count * product_price;

    // print output
    cout << "You hvae ordered " << purchase_count << " " << product_name << "(s)." << endl;
    cout << "Total price: $" << purchase_total << endl;
    cout << "Thank uou for shopping with CSC 134. " << endl << endl;

    return 0; // no errors





}

    