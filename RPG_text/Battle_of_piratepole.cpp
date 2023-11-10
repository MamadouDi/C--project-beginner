#include "Battle_of_piratepole.h"
#include <string>

using namespace std;




army_sent_to_Mao::army_sent_to_Mao(){
    pm_cannon = 20;
    pm_swordsmen = 1856;
    pm_archers = 700;
    pm_spearmen = 360;
    
}

int army_sent_to_Mao::get_pm_Cannon() {
    return pm_cannon;
}



int army_sent_to_Mao::get_pm_Swordsmen(){
    return pm_swordsmen;
}


int army_sent_to_Mao::get_pm_Archers(){
    return pm_archers;
}



int army_sent_to_Mao::get_pm_Spearmen(){
    return pm_spearmen;
}

int army_sent_to_Mao::get_pm_Soldiers(){
    return pm_soldiers = pm_archers + pm_swordsmen + pm_spearmen; 
}

army_sent_to_Gerd::army_sent_to_Gerd(){
    pg_cannon = 30;
    pg_swordsmen = 2500;
    pg_archers = 800;
    pg_spearmen = 490;
    
}

int army_sent_to_Gerd::get_pg_Cannon() {
    return pg_cannon;
}



int army_sent_to_Gerd::get_pg_Swordsmen(){
    return pg_swordsmen;
}


int army_sent_to_Gerd::get_pg_Archers(){
    return pg_archers;
}



int army_sent_to_Gerd::get_pg_Spearmen(){
    return pg_spearmen;
}

int army_sent_to_Gerd::get_pg_Soldiers(){
    return pg_soldiers = pg_archers + pg_swordsmen + pg_spearmen; 
}


string pirate_attack::p_attack(const string& Kingdom, const int& pm_archers, const int& pm_swordsmen, 
    const int& pm_spearmen, const int& pm_soldiers, const int& pm_cannon, const int& pg_archers, const int& pg_swordsmen,
    const int& pg_spearmen, const int& pg_soldiers, const int& pg_cannon) {
    
    return "Your " + Kingdom + " got news that Pirateland has already surrounded Maoroland with an army of " + to_string(pm_soldiers) +
        " in which we have " + to_string(pm_archers) + " archers, " + to_string(pm_spearmen) + " spearmen, " + to_string(pm_swordsmen) + ". In addition, " + to_string(pm_cannon) + " cannons were sent to attack Maoroland."
        "\nGerarldberg is also under attack. Pirateland sent an army of"+to_string(pg_soldiers)+" soldiers in which"+ to_string(pg_swordsmen)+" swordsmen, "+to_string(pg_archers)+" archers, "+to_string(pg_spearmen)+" spearmen, are taking part of the conflict."
        "in addition, "+to_string(pg_cannon)+" cannon are sent to destroy Gerarldberg."
        "\n"+Kingdom+" shall send an army for support.";
}



      
 