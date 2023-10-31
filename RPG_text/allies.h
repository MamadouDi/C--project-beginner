#ifndef ALLIES_HPP
#define ALLIES_HPP
#include <string>
using namespace std;

class Allies{
    public:
    
    int soldiers, swordsmen, archers, spearmen, cannon;
    double ressources, gold, wood, water, land;
    
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
    
    /***
     * void setResources();
    int getResources();
    
    void setGold();
    int getGold();
    
    void setWater();
    int getWater();
    
    void setWood();
    int getWood();
    
    void setWater();
    int getWater();
    
    void setLand();
    int getLand();***/
};

class Maoroland:public Allies{
public:
 int m_cannon, m_swordsmen, m_archers, m_spearmen, m_soldiers;  

    
Maoroland();
int getCannon();
int getSwordsmen();
int getArchers();
int getSpearmen();
int getSoldiers();

string getMaoroland_desc(const int& m_archers, const int& m_spearmen, const int& m_swordsmen, const int& m_soldiers, const int& m_cannon);
};

class Gerarldberg:public Allies{
public:
    int g_cannon, g_swordsmen, g_archers, g_spearmen, g_soldiers;
    
Gerarldberg();
int getCannon();
int getSwordsmen();
int getArchers();
int getSpearmen();
int getSoldiers();
string getGerarldberg_desc(const int& g_archers, const int& g_spearmen, const int& g_swordsmen, const int& g_soldiers, const int& g_cannon);

};

#endif