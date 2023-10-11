
#ifndef VICTORY_CONTRIBUTION_H
#define VICTORY_CONTRIBUTION_H
#include "character.h"
using namespace std;

class VictoryContributions{
public:
double  totalContribution, percentageContribution, skillContribution, agilityContribution, strengthContribution,
speedContribution, Health_Endurance_Stamina, experienceContribution;

void AddTotalContribution(characters& general);
 
double getTotalContribution() const;
};
#endif