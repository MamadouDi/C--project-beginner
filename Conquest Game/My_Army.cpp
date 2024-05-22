#include "My_Army.hpp"

// Constructor initializes the My_Army object with default values for each type of soldier
My_Army::My_Army() {
    swordsmen = 3896;
    archers = 789;
    spearmen = 478;
    cannon = 30;
    // The total number of soldiers is the sum of swordsmen, archers, and spearmen
    soldiers = swordsmen + archers + spearmen;
}

// Setter method to set the total number of soldiers
void My_Army::setSoldier(int value) {
    soldiers = value;
}

// Setter method to set the number of cannons
void My_Army::setCannon(int value) {
    cannon = value;
}

// Setter method to set the number of spearmen
void My_Army::setSpearmen(int value) {
    spearmen = value;
}

// Setter method to set the number of archers
void My_Army::setArchers(int value) {
    archers = value;
}

// Setter method to set the number of swordsmen
void My_Army::setSwordsmen(int value) {
    swordsmen = value;
}

// Getter method to retrieve the total number of soldiers
int My_Army::getSoldiers() {
    return soldiers;
}

// Getter method to retrieve the number of archers
int My_Army::getArchers() {
    return archers;
}

// Getter method to retrieve the number of cannons
int My_Army::getCannon() {
    return cannon;
}

// Getter method to retrieve the number of swordsmen
int My_Army::getSwordsmen() {
    return swordsmen;
}

// Getter method to retrieve the number of spearmen
int My_Army::getSpearmen() {
    return spearmen;
}
