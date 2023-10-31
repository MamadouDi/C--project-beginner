
#include <iostream>
#include "VictoryContribution.h" // Include the characters header file
#include "allies.h"
#include "ennemies.h"
#include "My_Army.hpp"
#include "Alliance.h"
#include <thread>
#include <string>


using namespace std;



int main() {
    

    characters general_1;
    general_1.setName("Mayura");
    general_1.setSkills(90);
    general_1.setAgility(95);
    general_1.setStrength(95);
    general_1.setSpeed(97);
    general_1.setHealth_Endurance_Stamina(98);
    general_1.setExperience(94);
    
      characters general_2;
    general_2.setName("Owumu"); // Corrected variable name
    general_2.setSkills(80);
    general_2.setAgility(80);
    general_2.setStrength(80);
    general_2.setSpeed(79);
    general_2.setHealth_Endurance_Stamina(80);
    general_2.setExperience(80);

    characters general_3;
    general_3.setName("Darmun"); // Corrected variable name
    general_3.setSkills(85);
    general_3.setAgility(95); // Corrected variable name
    general_3.setStrength(95);
    general_3.setSpeed(97);
    general_3.setHealth_Endurance_Stamina(98);
    general_3.setExperience(94);

    characters general_4;
    general_4.setName("Madrun"); // Corrected variable name
    general_4.setSkills(90);
    general_4.setAgility(80);
    general_4.setStrength(76);
    general_4.setSpeed(97);
    general_4.setHealth_Endurance_Stamina(86);
    general_4.setExperience(83);

    characters general_5;
    general_5.setName("Salmandra"); // Corrected variable name
    general_5.setSkills(86);
    general_5.setAgility(95);
    general_5.setStrength(78);
    general_5.setSpeed(99);
    general_5.setHealth_Endurance_Stamina(70);
    general_5.setExperience(80);
    
   My_Army my_army; 
   


string S = "Welcome to the conquest game.";

    // Traverse the given string S
    for (char c : S) {
        cout << c;
        this_thread::sleep_for(50ms); // Adjust the delay as needed
    }
    
    //std::this_thread::sleep_for(duration): This function causes the current thread to sleep or pause for the specified duration. It's commonly used for implementing delays or timing within a thread.
    

    cout << std::endl; // Move to the next line after displaying the text
    
    string Kingdom; 
    cout<<"Please name your Kingdom: ";
        getline(cin, Kingdom);
    for (char K: Kingdom){     
        cout << K;
      
      this_thread::sleep_for(50ms);
    }
    
    cout<<endl;
    
    cout << "Press enter to continue" << endl;

    cin.ignore();
    
    string presentation = "In your Kingdom " + Kingdom + ", here are five great generals: " +
    general_1.getName() + ", " + general_2.getName() + ", " + general_3.getName() + ", " +
    general_4.getName() + ", " + general_5.getName() + "; and an army of " + to_string(my_army.getSoldiers()) + " soldiers.";

    
    for (char p: presentation){
        cout << p;
        this_thread::sleep_for(50ms);
    }
    cout<<endl;
    
     
    
cout << "Press enter to continue" << endl;

    cin.ignore();
   
   


Maoroland maoroland;
alliance alliance;


string allia_ance = (alliance.allies());
for (char a: allia_ance){
    cout<<a;
    this_thread::sleep_for(50ms);
}
cout<<endl;

cout << "Press enter to continue" << endl;

    cin.ignore();
    
string all = (alliance.allies2(Kingdom));
for (char al: all){
    cout<<al;
    this_thread::sleep_for(50ms);
}
cout<<endl;
cout<<"Press enter to continue"<<endl;
cin.ignore();

string m = maoroland.getMaoroland_desc(
        maoroland.getArchers(), maoroland.getSpearmen(), maoroland.getSwordsmen(),
        maoroland.getSoldiers(), maoroland.getCannon());
        for (char m_r : m){
            cout << m_r;
            this_thread::sleep_for(50ms);
        }
        cout << endl;
        
    cout<<"Press enter to continue"<<endl;
    cin.ignore();

Gerarldberg gerarldberg;
string g = gerarldberg.getGerarldberg_desc(
        gerarldberg.getArchers(), gerarldberg.getSpearmen(), gerarldberg.getSwordsmen(),
        gerarldberg.getSoldiers(), gerarldberg.getCannon());
        for (char g_r: g){
            cout<<g_r;
            this_thread::sleep_for(50ms);
        }
cout<<endl;

    cout<<"Press enter to continue"<<endl;
    cin.ignore();

Pirateland pirateland;
string p = pirateland.getPirateland_desc(
        pirateland.getArchers(), pirateland.getSpearmen(), pirateland.getSwordsmen(),
        pirateland.getSoldiers(), pirateland.getCannon(), Kingdom);
        
        for (char p_r_lnd : p){
            cout<<p_r_lnd;
            this_thread::sleep_for(50ms);
        } 
        
        cout<<endl;
        
        cout<<"Press enter to continue"<<endl;
        cin.ignore();
        
 
        
string b = " BATTLE OF PIRATEPOLE \n To be continued";
    for (char bt : b){
        cout<<bt;
        this_thread::sleep_for(50ms);
    }
  cout<<endl;
  
  cin.ignore();
  
  
  
 return 0;
}