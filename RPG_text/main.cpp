
#include <iostream>
#include "VictoryContribution.h" // Include the characters header file
#include "allies.h"
#include "ennemies.h"

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
    
    cout<<"Welcome to the conquest game"<<endl;
    string Kingdom;
    cout<<"Please name your Kingdom: ";
    getline(cin, Kingdom);
    cout<<"In your Kingdom "<<Kingdom<<", here are five great general: "
    <<general_1.getName()<<", "<<general_2.getName()<<", "<<general_3.getName()<<", "
    <<general_4.getName()<<", "<<general_5.getName()<<"."<<endl;
    
    cout<<"With "<<general_1.getName()<<" being the strongest";
    
    VictoryContributions general_1_percentage;
    general_1_percentage.AddTotalContribution(general_1);
    
    cout<<"\nMayura's percentage contribution for war is: "<<general_1_percentage.getTotalContribution()<<endl;
    
    VictoryContributions general_2_percentage;
    general_2_percentage.AddTotalContribution(general_2);
    
    cout<<"\nOwumu's percentage contribution for war is: "<<general_2_percentage.getTotalContribution()<<endl;
    
    VictoryContributions general_3_percentage;
    general_3_percentage.AddTotalContribution(general_3);
    
    cout<<"\nDarmun's percentage contribution for war is: "<<general_3_percentage.getTotalContribution()<<endl;
    
     VictoryContributions general_4_percentage;
    general_4_percentage.AddTotalContribution(general_4);
    
    cout<<"\nMadrun's percentage contribution for war is: "<<general_4_percentage.getTotalContribution()<<endl;
    
     VictoryContributions general_5_percentage;
    general_5_percentage.AddTotalContribution(general_5);
    
    cout<<"\nSalmandra's percentage contribution for war is: "<<general_5_percentage.getTotalContribution()<<endl;
    
    cout<<"After the generals, you have an army of 3000 soldiers"<<endl;
   
   cout<<"In your continent, you have two allies:Maoroland, and Gerarldberg; Military Power,ressources for each of those allies will be displayed later\n"
   "nand 5 ennemies PirateHome, and others: their military powers and ressources will be displayed later." <<endl;


Maoroland maoroland;

cout << maoroland.getString(Kingdom)<< endl;
cout<<maoroland.getMaoroland_desc(
        maoroland.getArchers(), maoroland.getSpearmen(), maoroland.getSwordsmen(),
        maoroland.getSoldiers(), maoroland.getCannon())<<endl;

Gerarldberg gerarldberg;
cout<<gerarldberg.getGerarldberg_desc(
        gerarldberg.getArchers(), gerarldberg.getSpearmen(), gerarldberg.getSwordsmen(),
        gerarldberg.getSoldiers(), gerarldberg.getCannon())<<endl;


Pirateland pirateland;
cout<<pirateland.getPirateland_desc(
        pirateland.getArchers(), pirateland.getSpearmen(), pirateland.getSwordsmen(),
        pirateland.getSoldiers(), pirateland.getCannon())<<endl;
  
  
  
 return 0;
}
