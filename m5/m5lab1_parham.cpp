#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Parhaml
10/26/2026

This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_yell();
void choice_signature();
// TODO: add your new prototypes here
// Bot helped 
int get_valid_choice(int highestChoice);

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house to deliver your final package of the night." << endl;
  cout << "You need a signature but the house looks vacant." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = 0;

  // we used get valid choice int highest choice instead 
  /*
  cin >> choice;

  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  */

  choice = get_valid_choice(4);
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}


void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice = 0;

  
  cout << "Choose: ";
  cin >> choice;
  choice = get_valid_choice(2); // have to add this so it works for all bc different amt of choices
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
   else{
    cout << "This is not a valid option. Try Again" << endl;
  }
}

void choice_back_door() {
  cout << "There's a dark figure moving in the corner of the backyard." << endl;
  cout << "Do you:" << endl;
  cout << "1. Yell, 'whos's back there?' " << endl;
  cout << "2. Slowly creep towards the back door to get a signature for the package" << endl;
  cout << "3. Give up and go home" << endl;
  int choice = 0;
  cout << "Choose: ";
  cin >> choice;

  choice = get_valid_choice(3); // have to add this so it works for all bc different amt of choices
  if (1 == choice) {
    choice_yell();
  }
  else if (2 == choice) {
    choice_signature();
  }
  else if (3 == choice) {
    choice_go_home();
  }
   else {
    cout << "This is not a valid option. Try Again" << endl;
  }

}

void choice_go_home() {
  cout << "You leave a delivery attempt notice on the door." << endl;
  cout << "You go home and enjoy the rest of your night" << endl;
}

void choice_yell(){
  cout << "The figure stops moving. It turns towards you." << endl;
  cout << "Fear overcomes your body. you can't move then the figure runs towards you." << endl;
  cout << "After a day, the police department annouces you as a missing person." << endl;
}

void choice_signature(){
  cout << "You knock on the door. The figure that was behind disappers." << endl;
  cout << "A light turns on in the house." << endl;
  cout << "Do you:" << endl;
  cout << "1. Knock on the back door." << endl;
  cout << "2. Go home" << endl;
  cout << "Choose: ";
  int choice = 0;
  cin >> choice;

  choice = get_valid_choice(2); // have to add this so it works for all bc different amt of choices
  if (1 == choice){
    cout << "The door opens but no one is inside. You look around before feeling a presence behind you." << endl;
    cout << "You're suddenly pushed into the house, falling onto the floor. While the door slams behind you." << endl;
    cout << "The door won't open. You're stuck in the house before darkness consumes you" << endl;
  }
  else if (2 == choice){
    choice_go_home();
  }
  else{
    cout << "This is not a valid option. Try Again" << endl;
  }

}

// Bot gave this information- helps to return to the question if enters invalid choice 
int get_valid_choice(int highestChoice) {
	int choice = 0;

	do {
		cout << "Choose: ";

		if (!(cin >> choice)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			choice = 0;
		} else {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		if (choice < 1 || choice > highestChoice) {
			cout << "Invalid choice. Try again." << endl;
		}
	} while (choice < 1 || choice > highestChoice);

	return choice;
}