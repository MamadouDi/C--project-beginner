

#include "Battle_of_piratepole.h" 
#include <string> 

using namespace std;

// Constructor for army_sent_to_Mao class, initializing the army sent to Maoroland
army_sent_to_Mao::army_sent_to_Mao() {
    pm_cannon = 20;
    pm_swordsmen = 1856;
    pm_archers = 700;
    pm_spearmen = 360;
}

// Method to get the number of cannons sent to Maoroland
int army_sent_to_Mao::get_pm_Cannon() {
    return pm_cannon;
}

// Method to get the number of swordsmen sent to Maoroland
int army_sent_to_Mao::get_pm_Swordsmen() {
    return pm_swordsmen;
}

// Method to get the number of archers sent to Maoroland
int army_sent_to_Mao::get_pm_Archers() {
    return pm_archers;
}

// Method to get the number of spearmen sent to Maoroland
int army_sent_to_Mao::get_pm_Spearmen() {
    return pm_spearmen;
}

// Method to calculate and get the total number of soldiers sent to Maoroland
int army_sent_to_Mao::get_pm_Soldiers() {
    return pm_soldiers = pm_archers + pm_swordsmen + pm_spearmen;
}

// Constructor for army_sent_to_Gerd class, initializing the army sent to Gerarldberg
army_sent_to_Gerd::army_sent_to_Gerd() {
    pg_cannon = 30;
    pg_swordsmen = 2500;
    pg_archers = 800;
    pg_spearmen = 490;
}

// Method to get the number of cannons sent to Gerarldberg
int army_sent_to_Gerd::get_pg_Cannon() {
    return pg_cannon;
}

// Method to get the number of swordsmen sent to Gerarldberg
int army_sent_to_Gerd::get_pg_Swordsmen() {
    return pg_swordsmen;
}

// Method to get the number of archers sent to Gerarldberg
int army_sent_to_Gerd::get_pg_Archers() {
    return pg_archers;
}

// Method to get the number of spearmen sent to Gerarldberg
int army_sent_to_Gerd::get_pg_Spearmen() {
    return pg_spearmen;
}

// Method to calculate and get the total number of soldiers sent to Gerarldberg
int army_sent_to_Gerd::get_pg_Soldiers() {
    return pg_soldiers = pg_archers + pg_swordsmen + pg_spearmen;
}

// Method to simulate the pirate attack and return the outcome message
string pirate_attack::p_attack(const string& Kingdom, const int& pm_archers, const int& pm_swordsmen,
    const int& pm_spearmen, const int& pm_soldiers, const int& pm_cannon, const int& pg_archers, const int& pg_swordsmen,
    const int& pg_spearmen, const int& pg_soldiers, const int& pg_cannon) {
    return "Your " + Kingdom + " got news that Pirateland has already surrounded Maoroland with an army of " + to_string(pm_soldiers) +
        " in which we have " + to_string(pm_archers) + " archers, " + to_string(pm_spearmen) + " spearmen, " + to_string(pm_swordsmen) + ". In addition, " + to_string(pm_cannon) + " cannons were sent to attack Maoroland."
        "\nGerarldberg is also under attack. Pirateland sent an army of " + to_string(pg_soldiers) + " soldiers in which " + to_string(pg_swordsmen) + " swordsmen, " + to_string(pg_archers) + " archers, " + to_string(pg_spearmen) + " spearmen, are taking part of the conflict."
        " In addition, " + to_string(pg_cannon) + " cannons are sent to destroy Gerarldberg."
        "\n" + Kingdom + " shall send an army for support.";
}
