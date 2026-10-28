# M5LAB1 Input Retry Plan

## Goal

Make every menu repeat its input prompt until the player enters a valid number. Use one shared function so the validation code is not repeated in each menu.

## Status

User-tested: the shared input function works and accepts valid choices.

## Plan

1. Add the prototype `int get_valid_choice(int highestChoice);` with the other function prototypes.
2. Define `get_valid_choice()` once. It prompts for a choice, validates it, and returns it when valid.
3. In each menu, print that menu's question and options, then call the helper with its highest valid choice.
4. Use these maximum choices: `4` for `main_menu()`, `2` for `choice_front_door()`, `3` for `choice_back_door()`, and `2` for `choice_signature()`.
5. Keep each menu's existing `if`/`else` branches to handle the returned choice. Remove the invalid-choice retry recursion from `main_menu()`.

## Shared Input Function

The helper takes the highest allowed choice. Its `do-while` loop handles invalid input in one place:

```cpp
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
```

For example, `choice_front_door()` would get its validated choice like this after displaying its options:

```cpp
int choice = get_valid_choice(2);
```

The other menus use `get_valid_choice(4)`, `get_valid_choice(3)`, and `get_valid_choice(2)` respectively.

## Tests

- Passed (user-confirmed): valid choices are accepted.
- Enter an out-of-range number at each menu and confirm the prompt repeats.
- Enter letters at each menu and confirm the program recovers and asks again.
- Choose the quit option at the main menu and confirm the program exits normally.