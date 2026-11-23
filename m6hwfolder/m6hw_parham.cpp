// CSC 134
// M6HW - Project Prototype (Gold)
// Choose Your Own Adventure/Rooms - journey as a new elf
// Goal - deliver lost letter to santa
// Parhaml
// Novemeber 18,2026
// AI Assitance from copilot bot, Luna

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

// most info about room strings and connections  from m6bonus,  recived help from AI assistance on directions and commands in the if, else if, else statements.

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
    "A grand hall filled with Christmas decorations and working elves.",
    "An outdoor area with nine stalls, hay, and a sleigh.",
    "An assembly line in a busy factory, where elves make toys and stocking stuffers.",
    "A warm office decorated with ornaments and wreaths. Santa is ready to receive his letter.",
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

    int currentRoom = ENTRANCE;
    bool gameRunning = true;
    bool hasLetter = false;

    while (gameRunning) {

        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        if (currentRoom == REINDEER_STALLS && !hasLetter) {
            cout << "Oh no! A letter addressed to Santa is here. You have to deliever it to Santa!" << endl;
            cout << "Type take to pick it up." << endl;
        }

        cout << "Exits: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir];
                if (currentRoom == ENTRANCE && dir == NORTH && !hasLetter) {
                }
                cout << " ";
                hasExits = true;
            }
        }
        if (!hasExits) {
            cout << "none";
        }
        cout << endl;

        string command;
        cout << "\nCommands (north/east/south/west, take, deliver, quit): ";
        if (!(cin >> command)) {
            break;
        }

        Direction direction;
        bool isDirection = true;
        if (command == "north" || command == "n") {
            direction = NORTH;
        } else if (command == "east" || command == "e") {
            direction = EAST;
        } else if (command == "south" || command == "s") {
            direction = SOUTH;
        } else if (command == "west" || command == "w") {
            direction = WEST;
        } else {
            isDirection = false;
        }

        if (isDirection) {
            int nextRoom = connections[currentRoom][direction];
            if (nextRoom == -1) {
                cout << "You can't go that way." << endl;
            } else if (currentRoom == ENTRANCE && direction == NORTH && !hasLetter) {
                cout << "Santa's office has a sign that says, 'Do not Disturb (unless there is a serious circumstance involving Christmas deliveries!)." << endl;
            } else {
                currentRoom = nextRoom;
            }
        } else if (command == "take") {
            if (currentRoom == REINDEER_STALLS && !hasLetter) {
                hasLetter = true;
                cout << "You take the letter. Now bring it to Santa." << endl;
            } else if (hasLetter) {
                cout << "You already have the letter." << endl;
            } else {
                cout << "There is nothing here to take." << endl;
            }
        } else if (command == "deliver") {
            if (currentRoom == SANTA_OFFICE && hasLetter) {
                cout << "You deliver the letter to Santa. A kid is now lucky to not miss out on their wish list thanks to you!" << endl;
                gameRunning = false;
            } else if (!hasLetter) {
                cout << "You need to find the letter in the reindeer stalls first." << endl;
            } else {
                cout << "Go to Santa's Office to deliver the letter." << endl;
            }
        } else if (command == "quit") {
            cout << "Thanks for playing!" << endl;
            gameRunning = false;
        } else {
            cout << "I don't understand that command. Type help to see what you can do." << endl;
        }
}

}

