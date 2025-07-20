//

//#include "PokemonType.hpp"
//#include "../Utility.hpp"
#include "../include/Utility/Utility.hpp"
#include "../include/Pokemon/Pokemon.hpp"

Pokemon::Pokemon() : name("Pikachu"), p_type(PokemonType::ELECTRIC), health(70), maxHealth(70), attackPower(30) {}

Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower)
	: name(p_name), p_type(p_type), health(p_health), maxHealth(p_health), attackPower(p_attackPower) {}

Pokemon::Pokemon(const Pokemon& other)
	: name(other.name), p_type(other.p_type), health(other.health), maxHealth(other.health), attackPower(other.attackPower) {}

Pokemon::~Pokemon() {
	//Destructor logic here if needed
}

void Pokemon::attack(Pokemon& target)
{
	
	int damage = attackPower;
	cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
	target.TakeDamage(damage);
	Utility::waitForEnter();
}

void Pokemon::TakeDamage(int damage)
{
	health -= damage;
	if (health < 0) { health = 0; }
}

bool Pokemon::isFainted()
{
	return health <= 0;
}

void Pokemon::heal()
{
	health = maxHealth;
}
