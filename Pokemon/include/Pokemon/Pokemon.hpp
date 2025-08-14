#include<iostream>
//
#include "../include/Pokemon/PokemonType.hpp"
using namespace std;
namespace N_Pokemon {
    class Pokemon {
    protected:
        // Attributes 
        string name;
        PokemonType p_type;
        int health;
        int maxHealth;
        int attackPower;
    public:
        // Constructor 
        Pokemon();
        // Parameterized constructor 
        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower);
        // Copy constructor 
        Pokemon(const Pokemon& other);
        // Destructor
        ~Pokemon();

		// Getters
        string getName();
		PokemonType getType();
		int getHealth();
		int getMaxHealth();
		int getAttackPower();

		// Setters
		void setName(string p_name);
		void setType(PokemonType p_type);
		void setHealth(int p_health);
		void setMaxHealth(int p_maxHealth);
		void setAttackPower(int p_attackPower);

        //Methods
        virtual void attack(Pokemon* target) = 0;

        void TakeDamage(int damage);

        bool isFainted();

        void heal();


    };
}