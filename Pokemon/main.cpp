#include<iostream>
#include<string>
using namespace std;

enum class PokemonChoice {
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU
};

enum class PokemonType {
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};

class Pokemon {
public:
    std::string name;
    PokemonType type;
    int health;

    Pokemon() {}
    Pokemon(string name, PokemonType type, int health) {
        this->name = name;
        this->type = type;
        this->health = health;
    }

    void attack() {
        cout << name << "attacks with a powerful move!";
    }
};

class Player {
public:
    std::string name;
    Pokemon chosenPokemon;

    Player(){}
    Player(string name, Pokemon chosenPokemon){
        this->name = name;
        this->chosenPokemon = chosenPokemon;
    }

    void choosePokemon(int choice) {
        switch((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("CHARMANDER", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("BULBASAUR", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("SQUIRTLE", PokemonType::WATER, 100);
            break;
        default:
            chosenPokemon = Pokemon("PIKACHU", PokemonType::ELECTRIC, 100);
            break;
        }
    }
};

class ProfessorOak {
public:
    std::string name;

    void greetPlayer(Player &player) {
        cout << "Professor Oak : Hello there!Welcome to the world of Pokémon!\n"
            << "Professor Oak : My name is Oak.People call me the Pokémon Professor!\n"
            << "Professor Oak : But enough about me.Let's talk about you!\n"
            << "Professor Oak : First, tell me, what’s your name ?\n";
        getline(cin, player.name);
        cout << "Professor Oak: Ah, " << player.name << "! What a fantastic name!\n";
    }

    void offerPokemonChoices(Player& player) {
        cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);

        switch ((PokemonChoice)choice) {
        case PokemonChoice::CHARMANDER:
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case PokemonChoice::BULBASAUR:
            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;
        case PokemonChoice::SQUIRTLE:
            cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            cout << "Professor Oak: Let's go with Pikachu, Just be careful when it sneezes!\n";
            break;
        }
    }
};

int main() {
    Pokemon pokemon;
    Player player;
    ProfessorOak professorOak;

    professorOak.name = "ProfessorOak";

    professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);

    cout << "Professor Oak : "<<player.chosenPokemon.name<<" and you, Ash, are going to be the best of friends!\n"
        << "Professor Oak : Your journey begins now!Get ready to explore the vast world of Pokémon!\n";
    
    return 0;
}