#ifndef CHARACTER_H //This line checks whether the symbol CHARACTER_H has been defined previously in the code. 
//If it has not been defined, the code between #ifndef and #endif will be included in the compilation. 
//If it has been defined, the code inside the conditional block will be skipped.

#define CHARACTER_H /***
 *  If the symbol CHARACTER_H is not defined , 
 * this line defines it. This effectively tells the preprocessor that CHARACTER_H is now defined, 
 * preventing the subsequent inclusion of the same header file in the same translation unit.
 * ****/
#include <string>
using namespace std;

class characters {   // The class
public:  // Access specifier
    string name;  // Attribute (string variable)
    int skills, agility, strength, speed, Health_Endurance_Stamina, experience;
    // Attribute (int variable)
    
    void setName(string x);  // Method/function declaration
    string getName();
    
    void setSkills(int x);  //void means that the function does not return any value
    int getSkills();   //returns an integer value (int).
    
    void setAgility(int x);   // because of void, the function setAgility doesn't return any value.
    int getAgility();
    
    void setStrength(int x);
    int getStrength();
    
    void setExperience(int x);
    int getExperience();
    
    void setSpeed(int x);
    int getSpeed();
    
    void setHealth_Endurance_Stamina(int x);
    int getHealth_Endurance_Stamina();
};

#endif  //#endif to close the conditional block. 
//This ensures that if the header file is included multiple times in the same source file (perhaps indirectly through other headers), 
//only the content between #ifndef and #endif is processed once. 
//Subsequent inclusions are effectively skipped.


/*****
 * public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes
******/