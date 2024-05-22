// Description:
// This header file defines the Ennemies class, which represents the enemies in the conquest game. It contains member variables 
// to store information about the enemy forces such as soldiers, swordsmen, archers, spearmen, cannon, and resources. 
// Additionally, it provides methods to set and retrieve the attributes of the enemy forces.

#ifndef ENNEMIES_HPP
#define ENNEMIES_HPP

#include <string>
using namespace std;

class Ennemies {
public:
    // Member variables to store enemy forces and resources
    int soldiers, swordsmen, archers, spearmen, cannon;
    double ressources, gold, wood, water, land, diamond, natural_gas;
    
    // Methods to set and retrieve attributes of enemy forces
    void setSwordsmen();
    int getSwordsmen();
    
    void setArchers();
    int getArchers();
    
    void setSpearmen();
    int getSpearmen();
    
    void setCannon();
    int getCannon();
    
    void setSoldiers();
    int getSoldiers();
}; 

// Description:
// The Pirateland class represents the first enemy among the five enemies in the conquest game. It inherits from the Ennemies class
// and adds specific attributes and methods related to Pirateland. This includes attributes such as cannon, swordsmen, archers, spearmen,
// and soldiers. It also provides a method to generate a description of Pirateland's military power in relation to a specified kingdom.

class Pirateland : public Ennemies {
public:
    int p_cannon, p_swordsmen, p_archers, p_spearmen, p_soldiers;
    
    // Constructor for Pirateland
    Pirateland();
    
    // Methods to get attributes of Pirateland's military power
    int getCannon();
    int getSwordsmen();
    int getArchers();
    int getSpearmen();
    int getSoldiers();
    
    // Method to generate a description of Pirateland's military power
    string getPirateland_desc(const int& p_archers, const int& p_spearmen, const int& p_swordsmen, const int& p_soldiers, const int& p_cannon, const string& Kingdom);
};

#endif
