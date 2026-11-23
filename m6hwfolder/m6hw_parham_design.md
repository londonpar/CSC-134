# Santa's Workshop Adventure: Prototype and Expansion Ideas

## Prototype goal

Play as a new elf, find the letter in the reindeer stalls, unlock Santa's
office, and deliver it to Santa. This is a small, complete first objective:
the player explores, finds an item, and uses it to reach a destination.

## Room map

```text
                  Santa's Office
                  (locked until you have the letter)
                         |
                    north/south
                         |
Toy Room --west/east-- Entrance --east/west-- Reindeer Stalls
```

The room connections are two-way. The office is north of the entrance, the toy
room is west, and the reindeer stalls are east. The player starts in the
entrance.

## How to play

- Enter `north`, `east`, `south`, or `west` to move (`n`, `e`, `s`, and `w`
  also work).
- Go east to the reindeer stalls and enter `take` to pick up the letter.
- Return to the entrance and go north. The letter unlocks the office door.
- Enter `deliver` in Santa's office to complete this prototype.
- Enter `help` for a reminder or `quit` to stop playing.

## Sample in-game text for future additions

Use short clues that point players toward a next step without giving away
everything:

- **Toy room clue:** “An elf is searching for a missing gear. Ask around the
  workshop to learn where it went.”
- **Optional-task reward:** “Thanks for finding the gear! The sleigh team is
  one step closer to being ready.”
- **Next main goal after delivery:** “Santa smiles as he reads the letter.
  ‘Now help the reindeer get ready for takeoff!’”

These are examples for the larger project, not extra tasks required to finish
this prototype. They can become room descriptions or dialogue when those
features are added.

## Ideas for the larger final project

Keep the letter delivery as the first milestone, then extend the story in
small steps:

1. Add an inventory display so players can check what they are carrying.
2. Add one optional workshop task, such as finding a missing toy part or
   helping an elf, that gives the player a reason to visit the toy room.
3. Add a character in the stalls or toy room who shares a clue or reacts to
   the player's choice.
4. Make the delivery lead to a second objective, such as helping prepare the
   sleigh. This creates a larger adventure without making the first goal
   confusing.
5. Add a choice near the ending (for example, deliver the letter immediately
   or finish an optional task first) and show a different ending message.

Build and test each addition separately. Keep the map understandable, make
important items discoverable from room descriptions, and give the player a
clear next step after completing each goal.
