// CSC 134
// M3LAB1 - Menus and Choices
// Parhaml
// 9/28/2026

#include <iostream>
using namespace std;

// Declare tht your functions are coming later, nbefore main()
// after main, Define your functions in full
void SupportAna();
void DPSAna();
void DPSAna2();
void DPSAna3();


int main() {

  int choice; // menu choice
  // ask the question
  cout << "A Reinhardt is charging at you, What do you do?" << endl;
  cout << "1. Sleep him and run away" << endl;
  cout << "2. Run away" << endl;
  cout << "? "; // the prompt 
  cin >> choice;
  // can also say (choice ==1)
  if (1 == choice) {
    SupportAna();
  }
  else if (2 == choice) {
    DPSAna();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    // program ends, or we could loop around again
  }

  return 0; // tells the computer that we finished without errors

} // end of the main() method


// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
void SupportAna() {
  // this function is called in main if the user chooses 1.
  cout << "You chose to sleep him" << endl;
  cout << "Reinhardt is slept but there's an ulting Reaper" << endl;
  cout << "You weren't able to escape the Reaper ult, You Die" << endl;
}

void DPSAna() {
  // this function is called in main if the user chooses 1.
  cout << "You chose to run away" << endl;
  cout << "You manage to escape the Reinhardt pin." << endl;
 
  int secondchoice;
  cout << "But there's a flanking Reaper, What do you do?" << endl;
  cout << "1. Ping him to alert your teammates" << endl;
  cout << "2. Sleep him before he ults your team" << endl;
  cout << "? ";
  cin  >> secondchoice;


  if (secondchoice == 1) {
    DPSAna2();
  }
  else if (secondchoice == 2) {
    DPSAna3();
  }
  else {
    cout << "This is not a valid choice" << endl;
  }


    }
void DPSAna2() {
    cout << "You pinged him, but your teammates ignored your ping!" << endl;
    cout << "Reaper ults and everyone on your team dies." << endl;

}
void DPSAna3() {
    cout << "You slept him as soon as he ulted." << endl;
    cout << "Your teammates turn around and win the team fight!" << endl;
}

// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
