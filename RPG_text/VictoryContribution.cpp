#include <iostream>
#include "VictoryContribution.h"




using namespace std;

/***
     * Skills: 20%
Agility: 20%
Strength: 30%
Speed: 15%
Health/Endurance/Stamina: 10%
Experience: 5%
 ******/


void VictoryContributions::AddTotalContribution(characters& general) {
    
     skillContribution = general.getSkills() * 0.4;
    agilityContribution = general.getAgility() * 0.4;
    strengthContribution = general.getStrength() * 0.6;
    speedContribution = general.getSpeed() * 0.3;
    Health_Endurance_Stamina = general.getHealth_Endurance_Stamina() * 0.2;
    experienceContribution = general.getExperience() * 0.1;
    
    totalContribution = skillContribution+ agilityContribution+ strengthContribution +
speedContribution+ Health_Endurance_Stamina+ experienceContribution;

percentageContribution = (totalContribution*100)/600;
    
}

double VictoryContributions::getTotalContribution() const {
    return percentageContribution;
}
