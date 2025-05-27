#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout<<"Narrator’s Voice:\n" 
        "Welcome, brave adventurer!\n" 
        "You find yourself standing in front of a massive, ancient castle.\n" 
        "The walls are cracked with age,\n" 
        "and the doors creak as they slowly open in front of you.\n" 
        "Inside, there are many rooms, each more mysterious than the last.\n" 
        "Some may hold treasures beyond imagination,\n" 
        "while others may hide dangers lurking in the shadows.\n";

    cout << "\n####----####----####----####----####----####----####----####----####----\n";

    cout << "Mission Objective :\n"
        "Your goal is simple, yet perilous—choose a room! \n"
        "Once inside, who knows what you may find ?\n"
        "Will it be riches, knowledge, or something… more sinister ?\n"
        "It’s all up to the room you pick.\n";

    cout << "\n####----####----####----####----####----####----####----####----####----\n";

    cout << "Narrator’s Voice:\n"
        "The fate of your adventure lies in the room you choose.\n"
        "Will you find riches or danger?\n"
        "Only time will tell... Choose wisely, adventurer, for once you step inside,\n"
        "there’s no turning back.\n";

    cout << " Step 1:\n"
        "Enter the castle, choose your room by entering a number(1, 2, or 3).\n";

    int room_number;
    std::string room_outcome;

    cin >> room_number;

    switch (room_number) {
    case 1:
        room_outcome = "A room full of gold coins! You can retire now, you lucky soul!\n";
        break;
    case 2:
        room_outcome = "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price.\n";
        break;
    case 3:
        room_outcome = "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely...\n";
        break;
    default:
        room_outcome = "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors.\n";
        break;
    }

    cout << room_outcome;

    return 0;
}