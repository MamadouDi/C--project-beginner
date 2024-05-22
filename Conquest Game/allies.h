
#ifndef ALLIES_HPP
#define ALLIES_HPP


#include <string>
using namespace std;

// Declare the Allies class
class Allies {
public:
    // Member variables representing soldiers and resources
    int soldiers, swordsmen, archers, spearmen, cannon;
    double resources, gold, wood, water, land;
    
    // Setter and getter functions for swordsmen
    void setSwordsmen();
    int getSwordsmen();
    
    // Setter and getter functions for archers
    void setArchers();
    int getArchers();
    
    // Setter and getter functions for spearmen
    void setSpearmen();
    int getSpearmen();
    
    // Setter and getter functions for cannon
    void setCannon();
    int getCannon();
    
    // Setter and getter functions for soldiers
    void setSoldiers();
    int getSoldiers();
};

// Declaration of the Maoroland class inheriting from Allies
class Maoroland : public Allies {
public:
    // Member variables representing Maoroland's military power
    int m_cannon, m_swordsmen, m_archers, m_spearmen, m_soldiers;  

    // Constructor for Maoroland class
    Maoroland();

    // Getter functions for Maoroland's military attributes
    int getCannon();
    int getSwordsmen();
    int getArchers();
    int getSpearmen();
    int getSoldiers();

    // Method to generate Maoroland's military description
    string getMaoroland_desc(const int& m_archers, const int& m_spearmen, const int& m_swordsmen, const int& m_soldiers, const int& m_cannon);
};

// Declaration of the Gerarldberg class inheriting from Allies
class Gerarldberg : public Allies {
public:
    // Member variables representing Gerarldberg's military power
    int g_cannon, g_swordsmen, g_archers, g_spearmen, g_soldiers;
    
    // Constructor for Gerarldberg class
    Gerarldberg();

    // Getter functions for Gerarldberg's military attributes
    int getCannon();
    int getSwordsmen();
    int getArchers();
    int getSpearmen();
    int getSoldiers();

    // Method to generate Gerarldberg's military description
    string getGerarldberg_desc(const int& g_archers, const int& g_spearmen, const int& g_swordsmen, const int& g_soldiers, const int& g_cannon);
};


#endif
