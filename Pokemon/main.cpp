#include<iostream>
#include<string>
using namespace std;

bool keepPlaying;

void clearConsole() {
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
        cout << "Ah, "<<player.name<<", let me tell you about your grand adventure that's about to unfold!\n";
        waitForEnter();
        cout << "Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\n";
        waitForEnter();
        cout << "Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion." << player.name << "Wait, isn’t that just like every other Pokémon game?\n";
        waitForEnter();
        cout << "No breaking the fourth wall, " << player.name << "!This is serious business.\n";
        waitForEnter();
        cout << "To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter.\n";
        waitForEnter();
        clearConsole();
        cout << "Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!" << player.name << ": Piece of cake, right?\n";
        waitForEnter();
        cout << "Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!\n";
        waitForEnter();
        cout << "So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?" << player.name << ": Ready as I’ll ever be, Professor!\n";
        waitForEnter();
        cout << "That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!\n";
        waitForEnter();
        cout << "Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\n";
        waitForEnter();
        clearConsole();
    }
};

void gameLoop(Player player) {
    int choice;
	keepPlaying = true;
    while (keepPlaying) {
        clearConsole();
        cout << "What would you like to do next - " << player.name <<"\n"
            << "1. Battle Wild Pokémon\n"
            << "2. Visit PokeCenter\n"
            << "3. Challenge Gyms\n"
            << "4. Enter Pokémon League\n"
            << "5. Quit\n";
        
		cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
		case 1:
			cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n";
            cout << "[functionalities not implemented till now]";
			break;
        case 2:
			cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
			cout << "[functionalities not implemented till now]";
			break;
        case 3:
			cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
			cout << "[functionalities not implemented till now]";
            break;
        case 4:
			cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
			cout << "[functionalities not implemented till now]";
			break;
		case 5:
			cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
            waitForEnter();
			keepPlaying = false;
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
			waitForEnter();
			continue;
        }
    }
}

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
    //cout << "\n[Placeholder for the Game Loop]\n";
    gameLoop(player);
#pragma endregion

    gameLoop(player);

    return 0;
}

