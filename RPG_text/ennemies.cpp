#include "ennemies.h"
#include <string>

using namespace std;

void Ennemies::setCannon() {
    cannon = 0;
}

int Ennemies::getCannon() {
    return cannon;
}

void Ennemies::setSwordsmen(){
    swordsmen = 0;
}

int Ennemies::getSwordsmen(){
    return swordsmen;
}

void Ennemies::setArchers(){
    archers = 0;
}
int Ennemies::getArchers(){
    return archers;
}

void Ennemies::setSpearmen(){
    spearmen = 0;
}
int Ennemies::getSpearmen(){
    return spearmen;
}

void Ennemies::setSoldiers(){
    soldiers = 0;
}
int Ennemies::getSoldiers(){
    return soldiers;
}

//Maoroland's military power
Pirateland::Pirateland() {
    p_cannon = 50;
    p_swordsmen = 4789;
    p_archers = 890;
    p_spearmen = 578;
}

int Pirateland::getCannon() {
    return p_cannon;
}



int Pirateland::getSwordsmen(){
    return p_swordsmen;
}


int Pirateland::getArchers(){
    return p_archers;
}



int Pirateland::getSpearmen(){
    return p_spearmen;
}



int Pirateland::getSoldiers(){
    return p_soldiers = p_archers+p_spearmen+p_swordsmen;
}

string Pirateland::getPirateland_desc(const int& p_archers, const int& p_spearmen, const int& p_swordsmen, const int& p_soldiers, const int& p_cannon){
    return "\nPirateland military power is made of " + to_string(p_swordsmen) +" swordsmen, " + to_string(p_archers)+" archers, "+ to_string(p_spearmen)+" spearmen. Which is a total of "+ to_string(p_soldiers)+" soldiers.Moreover, Pirateland has a total of "+ to_string(p_cannon)+" of cannon.";
    
}

