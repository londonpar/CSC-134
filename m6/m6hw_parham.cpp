// CSC 134
// M6HW - Project Prototype (Gold)
// Choose Your Own Adventure/Rooms - journey as a new elf
// Parhaml
// Novemeber 18,2026


#include <iostream>
#include <string>
using namespace std;

// most from m6bonus
enum Direction { 
    NORTH,
    EAST,
    SOUTH,
    WEST,
    NUM_DIRECTIONS      
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

enum Room {
    ENTRANCE,
    REINDEER_STALLS,
    TOY_ROOM,
    SANTA_OFFICE,
    NUM_ROOMS
};

// most info and room, directions stuff from m6bonus

int main(){
    string name;

    cout << "Welcome To Santa's Workshop!" << endl;
    cout << "As a new elf, we have to teach you the ins and outs of toy-making!" << endl;
    cout << "Let's begin by telling us your name: ";
    cin  >> name;
    cout << "Welcome " << name << " ! ";
    cout << "First, start exploring the workshop and getting to know the different places!";

string roomNames[NUM_ROOMS] = {
        "Entrance",      
        "Reindeer Stalls",
        "Toy Room",  
        "Santa's Office",
    };

string roomDescriptions[NUM_ROOMS] = {
    "A grand hall filled with christmas decorations and working elves.",
    "An outside area with nine stalls, hay, and a sleigh.",
    "An assembly line organized factory filled with several evles working on toys and stocking stuffers.",
    "A grand door labeled 'Santa Office' covered with ornaments, candy canes, and wreaths",
 };

     int connections[NUM_ROOMS][NUM_DIRECTIONS];
    // KEEP: set every cell to -1 first. Then set only the exits that exist.
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

connections[ENTRANCE][WEST]  = TOY_ROOM;
connections[ENTRANCE][EAST]  = REINDEER_STALLS;
connections[ENTRANCE][NORTH] = SANTA_OFFICE;
connections[TOY_ROOM][EAST]  = ENTRANCE;
connections[REINDEER_STALLS][WEST] = ENTRANCE;
connections[SANTA_OFFICE][SOUTH] = ENTRANCE;

// M6 BONUS just changed starting room
int currentRoom = ENTRANCE;  
    bool gameRunning = true;           

    while (gameRunning) {

        // Step 1: show the room.
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        

        // Step 1, continued: show the exits.
        // The loop reads one row of the map. A cell that is not -1 is an exit.
        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;

        // Step 2: read a command. The cin >> operator reads one word.
        // TRY: type "go north". Predict what happens. Why?
        string command;
        cout << "\nWhat would you like to do? ";
        if (!(cin >> command)) {
            break;   // KEEP: input ended (Ctrl+D). Stop the loop. Without this line, the game never ends.
        }
    if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];   // move to the new room
            } else {
                cout << "You can't go that way." << endl;
            }
            } else if (command == "east" || command == "e") {
    if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }
  if (command == "south" || command == "s") {
            } else if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }
}
}

}

