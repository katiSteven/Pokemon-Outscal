#include<iostream>
#include<string>
#include <limits>
//
class Player;
class Pokemon;
enum PokemonType;
#include "PokemonChoice.hpp"
#include "Utility.hpp"
using namespace std;


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
        Utility::waitForEnter();
        cout << name << ": My name is Oak.People call me the Pokémon Professor!\n";
        Utility::waitForEnter();
        cout << name << ": But enough about me.Let's talk about you!\n";
        Utility::waitForEnter();
        cout<< name << ": First, tell me, what’s your name ?\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        Utility::waitForEnter();
        Utility::clearConsole();
    }

    void offerPokemonChoices(Player& player) {
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        Utility::waitForEnter();
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        Utility::clearConsole();
    }

    void explainMainQuest(const Player &player) {
        Utility::clearConsole();
        cout << "Ah, "<<player.name<<", let me tell you about your grand adventure that's about to unfold!\n";
        Utility::waitForEnter();
        cout << "Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck.\n";
        Utility::waitForEnter();
        cout << "Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four   and aim for the    title of Champion." << player.name << "Wait, isn’t that just like every other Pokémon game?\n";
        Utility::waitForEnter();
        cout << "No breaking the fourth wall, " << player.name << "!This is serious business.\n";
        Utility::waitForEnter();
        cout << "To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter.\n";
        Utility::waitForEnter();
        Utility::clearConsole();
        cout << "Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!" << player.name << ": Piece of cake, right?\n";
        Utility::waitForEnter();
        cout << "Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!\n";
        Utility::waitForEnter();
        cout << "So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?" << player.name << ": Ready as I’ll ever be, Professor!\n";
        Utility::waitForEnter();
        cout << "That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!\n";
        Utility::waitForEnter();
        cout << "Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!\n";
        Utility::waitForEnter();
        Utility::clearConsole();
    }
};

void gameLoop(Player &player) {
    int choice;
    bool keepPlaying = true;
    while (keepPlaying) {
        Utility::clearConsole();
        cout << "What would you like to do next - " << player.name <<"\n"
            << "1. Battle Wild Pokémon\n"
            << "2. Visit PokeCenter\n"
            << "3. Challenge Gyms\n"
            << "4. Enter Pokémon League\n"
            << "5. Quit\n";
        
		cout << "Enter your choice: ";
        cin >> choice;
		Utility::clearInputBuffer(); // Clear the input buffer to avoid issues with getline later
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
			keepPlaying = false;
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
			continue;
        }
        Utility::waitForEnter();
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

    return 0;


}