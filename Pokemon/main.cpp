#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;
    string chosen_pokemon;
    switch (choice) {
    case 1:chosen_pokemon = "You chose Bulbasaur! A wise choice.\n";
        break;
    case 2:chosen_pokemon = "You chose Charmander! A fiery choice.\n";
        break;
    case 3:chosen_pokemon = "You chose Squirtle! A cool choice.\n";
        break;
    default:chosen_pokemon = "You chose Pikachu! A terrific choice.\n";
        break;
    }

    cout << chosen_pokemon;

    return 0;
}
