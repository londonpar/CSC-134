// m6lab2_0002.cpp  -  Text adventure starter, version 2
//
// You will use: enums, arrays, parallel arrays, a 2D array, and a game loop.
//
// HOW TO READ THE COMMENTS
//   EDIT:  change this line to make the game your own.
//   KEEP:  the game needs this line as it is.
//   TRY:   a question. Predict the answer. Then run the program to check.
//   AI:    reserved for you. Use it to cite AI help, as the assignment says.
//
// Compile and run:
//   g++ -std=c++17 -Wall -Wextra m6lab2_0002.cpp -o adv
//   ./adv

// Assitance: Lunabot (Copoliot) & Parhaml

#include <iostream>
#include <string>
using namespace std;

// ============================================================
// PART 1: ENUMS (names for numbers)
// The compiler counts from 0. NORTH is 0, EAST is 1, and so on.
// The last name is the count: NUM_DIRECTIONS is 4.
// ============================================================

// KEEP: do not write "= number" after these names. Let the compiler count.
enum Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    NUM_DIRECTIONS      // KEEP: always the last name
};

// KEEP: the words must be in the same order as the Direction enum.
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// ADD A ROOM, step 1 of 4: add the new name above NUM_ROOMS.
// EDIT: rename the rooms. The order here must match every list below.
enum Room {
    ENTRANCE_HALL,
    DEN,
    KITCHEN,
    BEDROOM,
    BASEMENT,
    ATTIC,
    HIDDEN_ROOM,              
    NUM_ROOMS           // KEEP: always the last name
};

// added items to rooms
enum items {
    FLASHLIGHT,
    DOLL,
    KEY,
    NUM_ITEMS
};

int main() {
    // ============================================================
    // PART 2: ROOM DATA (parallel arrays)
    // Same index means same room.
    // roomNames[LIBRARY] and roomDescriptions[LIBRARY] both
    // describe the Library.
    // ============================================================

    // ADD A ROOM, step 2 of 4: add the new name at the end of this list.
    string roomNames[NUM_ROOMS] = {
        "Entrance Hall",     // EDIT: use any names you like
        "Den",
        "Kitchen",
        "Bedroom",
        "Basement",
        "Attic",
        "Hidden Room",       
    };

    // ADD A ROOM, step 3 of 4: add the new description at the end.
    // TRY: make this list one item shorter than NUM_ROOMS. Does the
    // compiler warn you? What does the game print for that room?
    string roomDescriptions[NUM_ROOMS] = {
        "A grand entrance hall with a dusty chandelier hanging above.",
        "A small living space with old chairs and glass table.",
        "A small kitchen with an old stove and wooden counters.",
        "A spacious room with boxes and a framed bed. A hidden door is here; type 'use key' to unlock it.",
        "A dark, damp basement with cobwebs in the corners and a washer and dryer.",
        "A cramped attic with a faulty light bulb. Type 'use flashlight' to search.",
    };
    string itemClues[NUM_ITEMS] = {
        "A flashlight is here. Type take to pick it up.",
        "A doll is here. Type take to pick it up.",
        "A key is here. Type take to pick it up."
    };
    // BONUS: objects. Use two more parallel arrays, the same way:
        string itemNames[NUM_ITEMS] = {"flashlight", "doll", "key"};
        int itemRoom[NUM_ITEMS]     = {KITCHEN, HIDDEN_ROOM, -1};
        bool inventory[NUM_ITEMS]   = {false, false, false}; // Track which items the player has taken.
        bool atticSearched = false;

    // itemRoom[i] holds the room number where item i is.
    // You also need an enum Item that ends with NUM_ITEMS.

    // ============================================================
    // PART 3: THE MAP (a 2D array)
    // connections[from_room][direction] holds the room you reach.
    // The value -1 means "no exit".
    // ============================================================
    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // KEEP: set every cell to -1 first. Then set only the exits that exist.
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // ADD A ROOM, step 4 of 4: add the exits in BOTH rooms.
    // EDIT: change, add, or remove exits.
    // Read this line as: from the Entrance Hall, go north to reach the Library.
    connections[ENTRANCE_HALL][NORTH] = DEN;
    connections[ENTRANCE_HALL][EAST]  = KITCHEN;
    connections[ENTRANCE_HALL][WEST]  = BEDROOM;
    connections[DEN][SOUTH]       = ENTRANCE_HALL;   // the way back
    connections[KITCHEN][SOUTH]       = BASEMENT;
    connections[KITCHEN][WEST]        = ENTRANCE_HALL;
    connections[BEDROOM][EAST]         = ENTRANCE_HALL;
    connections[BASEMENT][NORTH]      = KITCHEN;
    connections[DEN][NORTH] = ATTIC;     // EXAMPLE 4 of 4
    connections[ATTIC][SOUTH]   = DEN;   // EXAMPLE 4 of 4
    connections[BEDROOM][SOUTH] = HIDDEN_ROOM;
    connections[HIDDEN_ROOM][NORTH] = BEDROOM;
    // TRY: delete one "way back" line. Predict what the player can do.

    // ============================================================
    // PART 4: GAME STATE
    // ============================================================
    int currentRoom = ENTRANCE_HALL;   // EDIT: start in any room
    bool gameRunning = true;           // KEEP: the loop runs while this is true
    bool hiddenDoorUnlocked = false;

    // ============================================================
    // PART 5: THE GAME LOOP
    // One pass of the loop is one turn:
    //   Step 1: show the room and the exits.
    //   Step 2: read a command.
    //   Step 3: act on the command.
    //   Step 4: repeat, unless gameRunning is false.
    // ============================================================
    while (gameRunning) {

        // Step 1: show the room.
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;
        for (int i = 0; i < NUM_ITEMS; i++) {
            if (itemRoom[i] == currentRoom) {
                cout << itemClues[i] << endl;
            }
        }

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

        // Step 3: act on the command.
        // TRY: type NORTH in capital letters. Why does it fail?
        // STRETCH: the four direction blocks repeat the same idea.
        // Can you replace them with one loop over DIRECTION_NAMES?
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
        } else if (command == "south" || command == "s") {
            if (currentRoom == BEDROOM && !hiddenDoorUnlocked) {
                cout << "The hidden door is locked. Type 'use key' to unlock it." << endl;
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
        } else if (command == "take") { // Allow the player to take items in the current room.
            bool foundItem = false; // Remember whether this room contains an item.
            for (int i = 0; i < NUM_ITEMS; i++) { // Check each item location.
                if (itemRoom[i] == currentRoom) { // Take an item found in this room.
                    inventory[i] = true; // Record the item in the player's inventory.
                    itemRoom[i] = -1; // Mark the item as no longer in the room.
                    cout << "You took the " << itemNames[i] << "." << endl; // Confirm the pickup.
                    foundItem = true; // Record that the command succeeded.
                    if (i == DOLL) {
                        gameRunning = false;
                        break;
                    }
                } // Finish checking this item's location.
            } // Finish checking all item locations.
            if (!foundItem) { // Handle take when this room has no items.
                cout << "There is nothing here to take." << endl; // Explain why nothing was collected.
            } // Finish the no-item check.
        } else if (command == "search") {
            if (currentRoom != ATTIC) {
                cout << "There is nothing useful to search here." << endl;
            } else {
                cout << "It's too dark to search. Type 'use flashlight'." << endl;
            }
        } else if (command == "use") {
            string item;
            if (!(cin >> item)) {
                break;
            } else if (item == "flashlight") {
                if (currentRoom != ATTIC) {
                    cout << "There is nowhere dark to use the flashlight." << endl;
                } else if (!inventory[FLASHLIGHT]) {
                    cout << "You don't have a flashlight." << endl;
                } else if (atticSearched) {
                    cout << "You have already searched the attic." << endl;
                } else {
                    atticSearched = true;
                    itemRoom[KEY] = ATTIC;
                    cout << "You search the attic with your flashlight and find a key." << endl;
                }
            } else if (item != "key") {
                cout << "You can't use that item." << endl;
            } else if (currentRoom != BEDROOM) {
                cout << "There is no locked door here." << endl;
            } else if (!inventory[KEY]) {
                cout << "You don't have a key." << endl;
            } else if (hiddenDoorUnlocked) {
                cout << "The hidden door is already unlocked." << endl;
            } else {
                hiddenDoorUnlocked = true;
                cout << "You unlock the hidden door with the key. Go south to enter." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;   // Step 4 will end the loop
        } else {
            // EDIT: write your own message.
            cout << "I don't understand that command." << endl;
        }
    }

    if (inventory[DOLL]) {
        cout << "You found the doll! It has $100 dollars in its jacket!" << endl;
    }
    cout << "Thanks for playing!" << endl;
    return 0;
}
