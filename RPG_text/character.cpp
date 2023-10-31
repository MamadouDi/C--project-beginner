#include "character.h"

using namespace std;


void characters::setName(string x){ //// This function is a member of the "characters" class and is used to set the "name" attribute.
// It takes a string argument 'x' and assigns it to the 'name' attribute of the class.
    name = x;
}

string characters::getName(){ // This function is a member of the "characters" class and is used to retrieve the value of the "name" attribute.
// It returns the value of the 'name' attribute when called.
    return name;
}

void characters::setSkills(int x) {
    skills = x;
}

int characters::getSkills() {
    return skills;
}

void characters::setAgility(int x) {
    agility = x;
}

int characters::getAgility() {
    return agility;
}

void characters::setStrength(int x) {
    strength = x;
}

int characters::getStrength() {
    return strength;
}

void characters::setExperience(int x) {
    experience = x;
}

int characters::getExperience() {
    return experience;
}

void characters::setSpeed(int x) {
    speed = x;
}

int characters::getSpeed() {
    return speed;
}

void characters::setHealth_Endurance_Stamina(int x) {
    Health_Endurance_Stamina = x;
}

int characters::getHealth_Endurance_Stamina() {
    return Health_Endurance_Stamina;
}

