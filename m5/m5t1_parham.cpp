// CSC 134
// M5T1 - Functions
// parhal
// 10/19/26
// Goal: Practice basic functions
// void, and value-returning

#include <iostream>
using namespace std;

// Declasre functions here
// Void functions
void greet();
void speak(string message);

// Value-returning functions
int num_add(int num);
int num_double(int num);

int main () {
    cout << "Void Function Example" << endl;
    greet();
    speak("Hello world");
    speak ("Another message.");
    cout << "Value Returning Example" << endl;
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int answer = num_add(number);
    cout << "num_add (" << number << ") returns: " << answer << endl;
    
    answer = num_double(number);
    cout << "num_double (" << number << ") returns: " << answer << endl;
    return 0;
}

void greet() {
    // greet the user : no arguments in, no return out
    cout << "What's up" << endl;
}

void speak(string message){
    // talk to user:
    // arguments: string, the message to speak
    // return: none
    // (This would be useful if i wanted speak text to look a certain way, etc.)
    cout << message << endl;
}

// Value-Retuting functions
int num_add(int num) {
    // Arguments: num, the value to start with
    // Return int, num + 1
    num = num +1;
    return num;
}
int num_double(int num) {
    // Arguments: num, the value to start with
    // Return int, num + 1
    num *= 2; // same as num = num * 2
    return num;
}