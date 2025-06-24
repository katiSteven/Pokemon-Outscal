#include<iostream>
//
using namespace std;
enum PokemonType;
class Pokemon {
public:
    // Attributes 
    string name;
    PokemonType type;
    int health;

    // Constructor 
    Pokemon();
    // Parameterized constructor 
    Pokemon(string p_name, PokemonType p_type, int p_health);
    // Copy constructor 
    Pokemon(const Pokemon& other);
    // Destructor
    ~Pokemon();
    //Methods
    void attack();
};