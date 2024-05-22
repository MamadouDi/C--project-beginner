#include <iostream>
#include "VictoryContribution.h" 
#include "allies.h" 
#include "ennemies.h" 
#include "My_Army.hpp" 
#include "Alliance.h" 
#include <thread> 
#include <string> 
#include <stdlib.h> 
#include <conio.h> 
#include "Battle_of_piratepole.h" 

using namespace std;

// Main program for the conquest game where players manage their kingdom and generals,
// interact with allies, and prepare for a significant battle called the Battle of Piratepole.

int main() {
    // Creating and setting up the characters (generals)
    characters general_1;
    general_1.setName("Mayura");
    general_1.setSkills(90);
    general_1.setAgility(95);
    general_1.setStrength(95);
    general_1.setSpeed(97);
    general_1.setHealth_Endurance_Stamina(98);
    general_1.setExperience(94);
    
    characters general_2;
    general_2.setName("Owumu");
    general_2.setSkills(80);
    general_2.setAgility(80);
    general_2.setStrength(80);
    general_2.setSpeed(79);
    general_2.setHealth_Endurance_Stamina(80);
    general_2.setExperience(80);

    characters general_3;
    general_3.setName("Darmun");
    general_3.setSkills(85);
    general_3.setAgility(95);
    general_3.setStrength(95);
    general_3.setSpeed(97);
    general_3.setHealth_Endurance_Stamina(98);
    general_3.setExperience(94);

    characters general_4;
    general_4.setName("Madrun");
    general_4.setSkills(90);
    general_4.setAgility(80);
    general_4.setStrength(76);
    general_4.setSpeed(97);
    general_4.setHealth_Endurance_Stamina(86);
    general_4.setExperience(83);

    characters general_5;
    general_5.setName("Salmandra");
    general_5.setSkills(86);
    general_5.setAgility(95);
    general_5.setStrength(78);
    general_5.setSpeed(99);
    general_5.setHealth_Endurance_Stamina(70);
    general_5.setExperience(80);
    
    My_Army my_army; // Creating an instance of My_Army

    // Welcome message with a typing effect
    string S = "Welcome to the conquest game.";
    for (char c : S) {
        cout << c;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << std::endl; // New line after the welcome message
    
    // Prompting the user to name their kingdom
    string Kingdom; 
    cout << "Please name your Kingdom: ";
    getline(cin, Kingdom);
    for (char K: Kingdom){     
        cout << K;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;

    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();
    
    // Presentation message with a typing effect
    string presentation = "In your Kingdom " + Kingdom + ", here are five great generals: " +
    general_1.getName() + ", " + general_2.getName() + ", " + general_3.getName() + ", " +
    general_4.getName() + ", " + general_5.getName() + "; and an army of " + to_string(my_army.getSoldiers()) + " soldiers.";
    for (char p: presentation){
        cout << p;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;
    
    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();

    // Display allies information
    Maoroland maoroland;
    alliance alliance;

    string allia_ance = (alliance.allies());
    for (char a: allia_ance){
        cout << a;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;

    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();
    
    string all = (alliance.allies2(Kingdom));
    for (char al: all){
        cout << al;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;
    cout << "Press enter to continue" << endl;
    cin.ignore();

    // Display Maoroland's military description
    string m = maoroland.getMaoroland_desc(
        maoroland.getArchers(), maoroland.getSpearmen(), maoroland.getSwordsmen(),
        maoroland.getSoldiers(), maoroland.getCannon());
    for (char m_r : m){
        cout << m_r;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;

    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();

    // Display Gerarldberg's military description
    Gerarldberg gerarldberg;
    string g = gerarldberg.getGerarldberg_desc(
        gerarldberg.getArchers(), gerarldberg.getSpearmen(), gerarldberg.getSwordsmen(),
        gerarldberg.getSoldiers(), gerarldberg.getCannon());
    for (char g_r: g){
        cout << g_r;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;

    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();

    // Display Pirateland's military description
    Pirateland pirateland;
    string p = pirateland.getPirateland_desc(
        pirateland.getArchers(), pirateland.getSpearmen(), pirateland.getSwordsmen(),
        pirateland.getSoldiers(), pirateland.getCannon(), Kingdom);
    for (char p_r_lnd : p){
        cout << p_r_lnd;
        this_thread::sleep_for(50ms); // Typing delay
    } 
    cout << endl;

    // Wait for user input to continue
    cout << "Press enter to continue" << endl;
    cin.ignore();
        
    // Display "to be continued" message
    string b = " BATTLE OF PIRATEPOLE \n To be continued";
    for (char bt : b){
        cout << bt;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;
  
    cin.ignore();

    // Clear screen
    system("cls");
    
    // Display the title of the battle with a typing effect
    string B = "BATTLE OF PIRATEPOLE \n YEAR 1256 - 1260";
    for(char Bt : B){ 
        cout << Bt;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;
  
    cin.ignore();

    // Display the invasion attack details
    pirate_attack invasion;
    string i = invasion.p_attack(Kingdom, invasion.get_pm_Archers(), invasion.get_pm_Spearmen(), invasion.get_pm_Swordsmen(), invasion.get_pm_Soldiers(), invasion.get_pm_Cannon(), 
    invasion.get_pg_Archers(), invasion.get_pg_Spearmen(), invasion.get_pg_Swordsmen(), invasion.get_pg_Soldiers(), invasion.get_pg_Cannon());
    for (char iv: i){
        cout << iv;
        this_thread::sleep_for(50ms); // Typing delay
    }
    cout << endl;

    cin.ignore();

    return 0;
}
