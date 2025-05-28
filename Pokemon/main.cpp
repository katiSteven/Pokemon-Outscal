#include <iostream>
#include <string>
using namespace std;

enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main() {
    int choice;
    PokemonChoice chosen_pokemon = InvalidChoice;

    cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
    cout << "Choose Your Legendary Pokemon!";

    cin >> choice;

    switch (choice) {
    case 1:chosen_pokemon = Charmander;
        break;
    case 2:chosen_pokemon = Bulbasaur;
        break;
    case 3:chosen_pokemon = Squirtle;
        break;
    default:chosen_pokemon = Charmander;
        break;
    }

    switch (chosen_pokemon) {
    case Charmander:
        cout << "Charmander - The fire type. A real hothead\n";
        break;
    case Bulbasaur:
        cout << "Bulbasaur - The grass type. Calm and collected!\n";
        break;
    case Squirtle:
        cout << "Squirtle - The water type. Cool as a cucumber!\n";
        break;
    default:
        cout << "Charmander - The fire type. A real hothead\n";
        break;
    }
    cout << "Remember, Trainer, you and " << (chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur" : "Squirtle")
        << " are about to form an unstoppable bond!";

    return 0;
}