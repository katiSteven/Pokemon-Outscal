#include <iostream>
#include <string>
using namespace std;

enum menu {
    pizza,
    burgers,
    fries
};

int main() {
    
    menu selection = fries;

    cout << selection;

    return 0;
}