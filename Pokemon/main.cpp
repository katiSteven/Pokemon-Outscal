#include<iostream>
#include<string>
using namespace std;

void clearConsole() {
    // This function clears the console screen.
    // Note: This is platform-dependent. The following works on Windows.
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void waitForEnter() {
    cin.get();
};

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
        /*std::cout << name << " has been released.\n";*/
    }
    //Methods
    void attack() {
        cout << name << "attacks with a powerful move!";
        waitForEnter();
    }

};

class Player {
public:
    std::string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon(/*"Pikachu", PokemonType::ELECTRIC, 10*/);
    }

    Player(std::string p_name, const Pokemon& p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    Player(const Player &player) {
        name = player.name;
        chosenPokemon = player.chosenPokemon;
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
        cout << "Player: " << name << " chose " << chosenPokemon.name << "!\n";
        waitForEnter();
    }
};

class ProfessorOak {
public:
    std::string name;

    ProfessorOak() {
        name = "Professor Oak";
    }

    ProfessorOak(std::string p_name) {
        name = p_name;
    }

    void greetPlayer(Player &player) {
        cout << name << ": Hello there!Welcome to the world of Pokémon!\n";
        waitForEnter();
        cout << name << ": My name is Oak.People call me the Pokémon Professor!\n";
        waitForEnter();
        cout << name << ": But enough about me.Let's talk about you!\n";
        waitForEnter();
        cout<< name << ": First, tell me, what’s your name ?\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        waitForEnter();
        clearConsole();
    }

    void offerPokemonChoices(Player& player) {
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        waitForEnter();
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        clearConsole();
    }

    void explainMainQuest(const Player &player) {
        clearConsole();
        cout << "1. Professor Oak: Oak-ay " << player.name << ", I am about to explain you about your upcoming grand adventure.\n";
        waitForEnter();
        cout << "2. Professor Oak : You see, becoming a Pokémon Master is no easy feat.It takes courage, wisdom, and a bit of luck.\n";
        waitForEnter();
        cout << "3. Professor Oak : Your mission, should you choose to accept it(and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
        waitForEnter();
        cout << "4.[player.name] : Wait... that sounds a lot like every other Pokémon game out there.\n";
        waitForEnter();
        cout << "5. Professor Oak : Shhh!Don't break the fourth wall " << player.name << "! This is serious business.\n";
        waitForEnter();
        clearConsole();
        cout << "6. Professor Oak : To achieve this, you'll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        waitForEnter();
        cout << "7. Professor Oak : Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
        waitForEnter();
        cout << "8." << player.name << " : Sounds like a walk in the park... right ?\n";
        waitForEnter();
        cout << "9. Professor Oak : Hah!That’s what they all say!But beware, young Trainer, the path to victory is fraught with challenges.And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
        waitForEnter();
        cout << "10. Professor Oak : So, what do you say ? Are you ready to become the next Pokémon Champion ?\n";
        clearConsole();
        waitForEnter();
        cout << "11." << player.name << " : Ready as I’ll ever be, Professor!\n";
        waitForEnter();
        cout << "12. Professor Oak : That’s the spirit!Now, your journey begins.\n";
        waitForEnter();
        cout << "13. Professor Oak : But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        waitForEnter();
        clearConsole();
    }
};

int main() {

#pragma region Introduction
    //Pokemon pokemon;
    //Player player;
    //ProfessorOak professorOak;

    //professorOak.name = "ProfessorOak";

    //professorOak.greetPlayer(player);
    //professorOak.offerPokemonChoices(player);
#pragma endregion

#pragma region Intro 2
    //Pokemon pokemon1;
    //Player p = Player();
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
    //Player trainer = Player();
    //Pokemon bulbasaur = Pokemon("Bulbasaur", PokemonType::GRASS, 20);
    //Player steven = Player("Steven", bulbasaur);
    //Player steven_2 = Player(steven);
    //Pokemon bulbasaur_2 = Pokemon(bulbasaur);
#pragma endregion

#pragma region Main Quest
    // Create Pokemon and Player objects for the game
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); // Using parameterized constructor

    // Continue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Placeholder for where the game loop will start
    cout << "\n[Placeholder for the Game Loop]\n";
#pragma endregion

}

