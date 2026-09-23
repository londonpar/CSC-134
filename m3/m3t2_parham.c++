// CSC 134
// M3T2 - Random Numbers
// Parhaml
// 9/23/2026
// start writing a simple "crap" casino game.

#include <iostream>
#include <cstdlib>  // for random
#include <ctime>    // for tinme()
using namespace std;

int main() {

    // random number generator
    // rand() needs to be seeded wiht srand()
    // most "random" is to use the time
    srand(time(0)); // current seed it the time right now
    // cout << rand() << " " << rand() << endl;

    // to get a number in a usable size, us $ (modulo)
    int roll1 = (rand() % 6) + 1;  // mod 6 is 0-5 so add one for 1-6
    int roll2 = (rand() % 6) + 1; 
    int total = roll1 + roll2;
    int point; // only used if you roll a point

    cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;

    // processing -- figure out win, lose , or point
    // || is OR -- both sides must be full Boolean expressions (&& is AND)
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12){
        cout << "You lose." << endl;
    }
    else {
        // Point numbers (TODO module 4)
        point = total; // last roll becomes the point
        cout << "Your point number is: " << point << endl;
        cout << "Keep rolling: point is win, 7 is loss." << endl;
        // we'll finish later bc it requires a loop.
    } 
    return 0;
} 