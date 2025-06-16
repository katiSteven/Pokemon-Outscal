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
    // Attributes 
    std::string name;
    PokemonType type;
    int health;

    // Constructor 
    Pokemon() {
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
    }
    // Parameterized constructor 
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }
    // Copy constructor 
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }
    // Destructor
    ~Pokemon() {
        std::cout << name << " has been released.\n";
    }
    //Methods
    void attack() {
        cout << name << "attacks with a powerful move!";
    }

    void Print() {
        cout << "Name: " << name << "\n";
        cout << "Type: ";
        switch (type) {
            case PokemonType::ELECTRIC: cout << "ELECTRIC"; break;
            case PokemonType::FIRE: cout << "FIRE"; break;
            case PokemonType::GRASS: cout << "GRASS"; break;
            case PokemonType::WATER: cout << "WATER"; break;
            default:cout << "NONE"; break;
        }
        cout << "\n";
        cout << "Health: " << health << "\n";
        cout << "-----------------------\n";
    }
};

class Player {
public:
    std::string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 10);
        cout << "A new player named " << name << " has been created\n& their chosen Pokemon is " << chosenPokemon.name << "!!";
    }

    Player(std::string p_name, const Pokemon& p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "A new player named " << name << " has been created\n& their chosen Pokemon is " << chosenPokemon.name << "!!";
    }

    Player(const Player &player) {
        name = player.name;
        chosenPokemon = player.chosenPokemon;
        cout << "A new player named " << name << " has been created\n& their chosen Pokemon is " << chosenPokemon.name << "!!";
    }

    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice)
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

class Professor {
public:
    std::string name;

    Professor() {
        name = "Professor Oak";
    }

    Professor(std::string name) {
        this->name = name;
    }

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

#pragma region Introduction
    /*Pokemon pokemon;
    Player player;
    Professor professorOak;

    professorOak.name = "ProfessorOak";

    professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);

    cout << "Professor Oak : " << player.chosenPokemon.name << " and you, Ash, are going to be the best of friends!\n"
        << "Professor Oak : Your journey begins now!Get ready to explore the vast world of Pokémon!\n";*/
#pragma endregion

#pragma region Intro 2
    //Pokemon pokemon1;
    //Player p = Player();
    //cout << pokemon1.name << endl;

    //// You can not print Enum class value directly
    //cout << (int)(pokemon1.type) << endl;

    //cout << pokemon1.health << endl;
#pragma endregion
    
#pragma region OOPS and enums
    //Pokemon defaultPokemon;
    //Pokemon charmander = Pokemon("Charmander", PokemonType::FIRE, 100);
    //defaultPokemon.Print();
    //charmander.Print();
    //Pokemon bulbasaur = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
    //Pokemon bulbasaur_2 = Pokemon(bulbasaur);
    //bulbasaur.Print();
    //bulbasaur_2.Print();
    //bulbasaur_2.health = 80;
    //bulbasaur_2.Print();
#pragma endregion

#pragma region The Legendary Constructors Scroll
    Player trainer = Player();
    Pokemon bulbasaur = Pokemon("Bulbasaur", PokemonType::GRASS, 20);
    Player steven = Player("Steven", bulbasaur);
    Player steven_2 = Player(steven);
    Pokemon bulbasaur_2 = Pokemon(bulbasaur);
#pragma endregion

}