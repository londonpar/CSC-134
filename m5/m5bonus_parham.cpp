

#include <iostream>
using namespace std;

int main(){
    const string PASSWORD = "coolguy420";
    cout << "Enter password: ";
    string pass;
    cin >> pass;
    if(pass == PASSWORD){
        cout << "Correct" << endl;
    }
    else {
        cout <<  "Incorrect" << endl;
    }
        
}