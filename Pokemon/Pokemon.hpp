#include<iostream>
//
#include "PokemonType.hpp"
using namespace std;
class Pokemon {
public:
    // Attributes 
    string name;
    PokemonType p_type;
    int health;
    int maxHealth;

    // Constructor 
    Pokemon();
    // Parameterized constructor 
    Pokemon(string p_name, PokemonType p_type, int p_health);
    // Copy constructor 
    Pokemon(const Pokemon& other);
    // Destructor
    ~Pokemon();
    //Methods
	void attack(Pokemon& target);

    void TakeDamage(int damage);

    bool isFainted();
};