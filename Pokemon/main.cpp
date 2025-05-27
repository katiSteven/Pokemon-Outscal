#include <iostream>
#include <string>
using namespace std;

enum PokemonChoice{
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main() {
    
    PokemonChoice chosen_pokemon = InvalidChoice;

    cout << chosen_pokemon;

    return 0;
}