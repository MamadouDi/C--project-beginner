#ifndef VICTORY_CONTRIBUTION_H
#define VICTORY_CONTRIBUTION_H

#include "character.h"



class VictoryContributions {
public:
    // Member variables to store contribution factors
    double totalContribution, percentageContribution, skillContribution, agilityContribution, strengthContribution,
           speedContribution, Health_Endurance_Stamina, experienceContribution;

    // Function to calculate the total contribution of a general
    void AddTotalContribution(characters& general);

    // Function to retrieve the total contribution percentage
    double getTotalContribution() const;
};

#endif
