# M6 Bonus Text Adventure Requirements Plan

## Goal

Create a text adventure where the player finds a key, opens a hidden door, and discovers a bag of old coins.

## Requirements

1. The player's main goal is to open the hidden door.
2. The player can get a flashlight in the den.
3. The player uses the flashlight to search the attic.
4. Searching the attic leads the player to a doll.
5. The doll helps the player find the key.
6. The game uses the flashlight, doll, and key automatically when needed.
7. The player can move north, west, south, and east.
8. Opening the hidden door reveals a bag of old coins.
9. When the player enters a room with an item, show a description or clue that tells them the item is there and that they can type `take` to collect it.

## Code Assistance

AI assistance was used to add a `take` command. The command checks the current room, adds any item there to the player's inventory, and marks that item as taken.

## Item Clue Code Example

Add a clue string for each item, in the same order as `itemNames`, beside the item arrays:

```cpp
string itemClues[NUM_ITEMS] = {
    "A flashlight is here. Type take to pick it up.",
    "A doll is here. Type take to pick it up.",
    "A key is here. Type take to pick it up."
};
```

In the game loop, after displaying the room description, check which items are in the current room and show their clues:

```cpp
for (int i = 0; i < NUM_ITEMS; i++) {
    if (itemRoom[i] == currentRoom) {
        cout << itemClues[i] << endl;
    }
}
```

The existing `take` command sets a collected item's room to `-1`, so its clue will no longer be shown.

## Suggestion

Keep item clues separate from the room descriptions and show them whenever the player is in the item's room. This makes it clear that the item is available to take, without continuing to advertise it after it has been collected. In the attic, require `use flashlight` to reveal the doll and key; at the bedroom door, require `use key` to unlock it.
