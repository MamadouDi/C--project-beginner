#ifndef ENNEMIES_HPP
#define ENNEMIES_HPP
#include <string>
using namespace std;


class Ennemies{
    public:
    
    int soldiers, swordsmen, archers, spearmen, cannon;
    double ressources, gold, wood, water, land, diamond, natural_gas;
    
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
class Pirateland:public Ennemies{
    
public:
    int p_cannon, p_swordsmen, p_archers, p_spearmen, p_soldiers;
    
Pirateland();
int getCannon();
int getSwordsmen();
int getArchers();
int getSpearmen();
int getSoldiers();
string getPirateland_desc(const int& p_archers, const int& p_spearmen, const int& p_swordsmen, const int& p_soldiers, const int& p_cannon);
};

#endif