// This header file declares classes related to the Battle of Piratepole, including the invasion by Pirateland and the armies sent to Maoroland and Gerarldberg.

#ifndef BATTLE_OF_PIRATEPOLE_HPP
#define BATTLE_OF_PIRATEPOLE_HPP

#include <string> // 
using namespace std;

// Class declaration for Pirateland invasion
class Pirateland_invasion {
public:
    // Methods to set and retrieve total soldiers sent to Maoroland
    void sold_sent_to_Mao();
    int get_sold_sent_to_Mao();

    // Methods to set and retrieve total archers sent to Maoroland
    void arch_sent_Mao();
    int get_arch_sent_Mao();

    // Methods to set and retrieve total swordsmen sent to Maoroland
    void sword_sent_to_Mao();
    int get_sword_sent_to_Mao();

    // Methods to set and retrieve total spearmen sent to Maoroland
    void spear_sent_to_Mao();
    int get_spear_sent_to_Mao();

    // Methods to set and retrieve total cannon sent to Maoroland
    void can_sent_to_Mao();
    int get_can_sent_to_Mao();

    // Methods to set and retrieve total soldiers sent to Gerarldberg
    void sold_sent_to_Gerd();
    int get_sold_sent_to_Gerd();

    // Methods to set and retrieve total archers sent to Gerarldberg
    void arch_sent_Gerd();
    int get_arch_sent_Gerd();

    // Methods to set and retrieve total swordsmen sent to Gerarldberg
    void sword_sent_to_Gerd();
    int get_sword_sent_to_Gerd();

    // Methods to set and retrieve total spearmen sent to Gerarldberg
    void spear_sent_to_Gerd();
    int get_spear_sent_to_Gerd();

    // Methods to set and retrieve total cannon sent to Gerarldberg
    void can_sent_to_Gerd();
    int get_can_sent_to_Gerd();
};

// Class declaration for the army sent to Maoroland during the invasion
class army_sent_to_Mao : public Pirateland_invasion {
public:
    int pm_soldiers, pm_archers, pm_swordsmen, pm_cannon, pm_spearmen;

    army_sent_to_Mao();

    int get_pm_Cannon();
    int get_pm_Swordsmen();
    int get_pm_Archers();
    int get_pm_Spearmen();
    int get_pm_Soldiers();
};

// Class declaration for the army sent to Gerarldberg during the invasion
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

// Class declaration for handling the pirate attack and its outcome
class pirate_attack : public army_sent_to_Mao, public army_sent_to_Gerd {
public:
    // Method to simulate the pirate attack and return the outcome message
    string p_attack(const string& Kingdom, const int& pm_archers, const int& pm_swordsmen,
        const int& pm_spearmen, const int& pm_soldiers, const int& pm_cannon, const int& pg_archers, const int& pg_swordsmen,
        const int& pg_spearmen, const int& pg_soldiers, const int& pg_cannon);
};

#endif
