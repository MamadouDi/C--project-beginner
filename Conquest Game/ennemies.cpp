
#include "ennemies.h" 
#include <string> 

using namespace std;

// Set the number of cannons for the enemy
void Ennemies::setCannon() {
    cannon = 0;
}

// Get the number of cannons for the enemy
int Ennemies::getCannon() {
    return cannon;
}

// Set the number of swordsmen for the enemy
void Ennemies::setSwordsmen(){
    swordsmen = 0;
}

// Get the number of swordsmen for the enemy
int Ennemies::getSwordsmen(){
    return swordsmen;
}

// Set the number of archers for the enemy
void Ennemies::setArchers(){
    archers = 0;
}

// Get the number of archers for the enemy
int Ennemies::getArchers(){
    return archers;
}

// Set the number of spearmen for the enemy
void Ennemies::setSpearmen(){
    spearmen = 0;
}

// Get the number of spearmen for the enemy
int Ennemies::getSpearmen(){
    return spearmen;
}

// Set the total number of soldiers for the enemy
void Ennemies::setSoldiers(){
    soldiers = 0;
}

// Get the total number of soldiers for the enemy
int Ennemies::getSoldiers(){
    return soldiers;
}

// Constructor for Pirateland, initializing its military power attributes
Pirateland::Pirateland() {
    p_cannon = 60;
    p_swordsmen = 4789;
    p_archers = 1700;
    p_spearmen = 970;
}

// Get the number of cannons for Pirateland
int Pirateland::getCannon() {
    return p_cannon;
}

// Get the number of swordsmen for Pirateland
int Pirateland::getSwordsmen(){
    return p_swordsmen;
}

// Get the number of archers for Pirateland
int Pirateland::getArchers(){
    return p_archers;
}

// Get the number of spearmen for Pirateland
int Pirateland::getSpearmen(){
    return p_spearmen;
}

// Get the total number of soldiers for Pirateland and calculate it if not already set
int Pirateland::getSoldiers(){
    return p_soldiers = p_archers + p_spearmen + p_swordsmen;
}

// Generate a description of Pirateland's military power
string Pirateland::getPirateland_desc(const int& p_archers, const int& p_spearmen, const int& p_swordsmen, const int& p_soldiers, const int& p_cannon, const string& Kingdom){
    return "\nMade of " + to_string(p_swordsmen) + " swordsmen, " + to_string(p_archers) + " archers, " + to_string(p_spearmen) + " spearmen; and a total of " + to_string(p_soldiers) + " soldiers plus " + to_string(p_cannon) + " cannons."
           "Pirateland had always been attacking its neighbors, your Allies, and stole their resources which they are seeking from the outcome of your alliance. Since they joined " + Kingdom + ", they felt more powerful and more resilient."
           " So no wonder why Pirateland declared a war against " + Kingdom + ".";
}
