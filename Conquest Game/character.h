#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

// Define a class named "characters"
class characters {  
public:  // Public access specifier - members are accessible from outside the class
    string name;  // Attribute to store the character's name
    int skills, agility, strength, speed, Health_Endurance_Stamina, experience;
    // Attributes to store various character stats
    
    // Method to set the character's name
    void setName(string x);
    // Method to get the character's name
    string getName();
    
    // Method to set the character's skills
    void setSkills(int x);
    // Method to get the character's skills
    int getSkills();
    
    // Method to set the character's agility
    void setAgility(int x);
    // Method to get the character's agility
    int getAgility();
    
    // Method to set the character's strength
    void setStrength(int x);
    // Method to get the character's strength
    int getStrength();
    
    // Method to set the character's experience
    void setExperience(int x);
    // Method to get the character's experience
    int getExperience();
    
    // Method to set the character's speed
    void setSpeed(int x);
    // Method to get the character's speed
    int getSpeed();
    
    // Method to set the character's health, endurance, and stamina
    void setHealth_Endurance_Stamina(int x);
    // Method to get the character's health, endurance, and stamina
    int getHealth_Endurance_Stamina();
};

#endif
