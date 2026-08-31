// CSC 134
/* 
M1HW - Movie Talk
Parham, L
8/31/2026
*/

#include <iostream>
using namespace std;

int main() {
// Variables
    string movie_name;  // film title
    int movie_year; // year of releasse
    double movie_grossm;   // millions of USD of the gross

    movie_name = "Spider-Man: Across the Spider-Verse";
    movie_year = 2023;
    movie_grossm = 690.8; // in millions

    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;
    
    cout << "It grossed in total $" << movie_grossm << " million." << endl;

    cout << endl << " \"Everyone keeps telling me how my story is supposed to go. Nah. I'mma do my own thing.\" " << endl;
    
    cout << endl << " \"I love Chai tea. What did you just say? Chai tea? Chai means tea, you're saying tea tea!\" " << endl;

    cout << endl << "My favorite scene in " << movie_name << " is the chase scene with all the different types of Spider-Mans ordered to get Miles Morales." << endl;

    cout << "A fun fact about " << movie_name << " is that the lego scene in the movie was animated by a 14 year old animator." << endl;

}