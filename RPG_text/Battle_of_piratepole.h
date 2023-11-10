 // Battle_of_piratepole.hpp

#ifndef BATTLE_OF_PIRATEPOLE_HPP
#define BATTLE_OF_PIRATEPOLE_HPP
#include <string>
using namespace std;

class Pirateland_invasion {
public:
    

    void sold_sent_to_Mao(); // total soldiers sent to Maoroland
    int get_sold_sent_to_Mao();

    void arch_sent_Mao(); // for total archers sent to Maoroland
    int get_arch_sent_Mao();

    void sword_sent_to_Mao(); // for total swordsmen sent to Maoroland
    int get_sword_sent_to_Mao();

    void spear_sent_to_Mao(); // for total spearmen sent to Maoroland
    int get_spear_sent_to_Mao();

    void can_sent_to_Mao(); // for total cannon sent to Maoroland
    int get_can_sent_to_Mao();

    void sold_sent_to_Gerd();
    int get_sold_sent_to_Gerd();

    void arch_sent_Gerd();
    int get_arch_sent_Gerd();

    void sword_sent_to_Gerd();
    int get_sword_sent_to_Gerd();

    void spear_sent_to_Gerd();
    int get_spear_sent_to_Gerd();

    void can_sent_to_Gerd();
    int get_can_sent_to_Gerd();
};

    class army_sent_to_Mao:public Pirateland_invasion {
    public:
        int pm_soldiers, pm_archers, pm_swordsmen, pm_cannon, pm_spearmen;

        army_sent_to_Mao();

        int get_pm_Cannon();
        int get_pm_Swordsmen();
        int get_pm_Archers();
        int get_pm_Spearmen();
        int get_pm_Soldiers();
        
    
    };

    class army_sent_to_Gerd : public Pirateland_invasion {
    public:
        int pg_soldiers, pg_archers, pg_swordsmen, pg_cannon, pg_spearmen;

        army_sent_to_Gerd();

        int get_pg_Cannon();
        int get_pg_Swordsmen();
        int get_pg_Archers();
        int get_pg_Spearmen();
        int get_pg_Soldiers();
    };
    
    class pirate_attack:public army_sent_to_Mao,public army_sent_to_Gerd{
public:
        string p_attack(const string& Kingdom, const int& pm_archers, const int& pm_swordsmen,
    const int& pm_spearmen, const int& pm_soldiers, const int& pm_cannon, const int& pg_archers, const int& pg_swordsmen,
    const int& pg_spearmen, const int& pg_soldiers, const int& pg_cannon);
    };


#endif