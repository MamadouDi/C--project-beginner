#include "character.h"  // Include the header file for the "characters" class

using namespace std;  

// Function to set the character's name
void characters::setName(string x) {
    name = x;  // Assign the argument 'x' to the 'name' attribute
}

// Function to get the character's name
string characters::getName() {
    return name;  // Return the value of the 'name' attribute
}

// Function to set the character's skills
void characters::setSkills(int x) {
    skills = x;  // Assign the argument 'x' to the 'skills' attribute
}

// Function to get the character's skills
int characters::getSkills() {
    return skills;  // Return the value of the 'skills' attribute
}

// Function to set the character's agility
void characters::setAgility(int x) {
    agility = x;  // Assign the argument 'x' to the 'agility' attribute
}

// Function to get the character's agility
int characters::getAgility() {
    return agility;  // Return the value of the 'agility' attribute
}

// Function to set the character's strength
void characters::setStrength(int x) {
    strength = x;  // Assign the argument 'x' to the 'strength' attribute
}

// Function to get the character's strength
int characters::getStrength() {
    return strength;  // Return the value of the 'strength' attribute
}

// Function to set the character's experience
void characters::setExperience(int x) {
    experience = x;  // Assign the argument 'x' to the 'experience' attribute
}

// Function to get the character's experience
int characters::getExperience() {
    return experience;  // Return the value of the 'experience' attribute
}

// Function to set the character's speed
void characters::setSpeed(int x) {
    speed = x;  // Assign the argument 'x' to the 'speed' attribute
}

// Function to get the character's speed
int characters::getSpeed() {
    return speed;  // Return the value of the 'speed' attribute
}

// Function to set the character's health, endurance, and stamina
void characters::setHealth_Endurance_Stamina(int x) {
    Health_Endurance_Stamina = x;  // Assign the argument 'x' to the 'Health_Endurance_Stamina' attribute
}

// Function to get the character's health, endurance, and stamina
int characters::getHealth_Endurance_Stamina() {
    return Health_Endurance_Stamina;  // Return the value of the 'Health_Endurance_Stamina' attribute
}
