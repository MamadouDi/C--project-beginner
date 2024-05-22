#include <iostream>
#include "VictoryContribution.h"

// Description:
// This code defines the VictoryContributions class, which calculates the total contribution of a general towards victory
// based on their attributes such as skills, agility, strength, etc. Each attribute contributes a certain percentage to the
// total contribution, with different weights assigned to each attribute. The total contribution percentage is calculated
// as the sum of contributions from all attributes, divided by the maximum possible contribution (600 in this case).
// The getTotalContribution function retrieves the total contribution percentage.

using namespace std;

// Function to calculate the total contribution of a general based on their attributes
void VictoryContributions::AddTotalContribution(characters& general) {
    // Contribution factors based on each attribute
    // Skills contribute 20% to the total
    skillContribution = general.getSkills() * 0.4;
    // Agility contributes 20% to the total
    agilityContribution = general.getAgility() * 0.4;
    // Strength contributes 30% to the total
    strengthContribution = general.getStrength() * 0.6;
    // Speed contributes 15% to the total
    speedContribution = general.getSpeed() * 0.3;
    // Health, Endurance, and Stamina contribute 10% to the total
    Health_Endurance_Stamina = general.getHealth_Endurance_Stamina() * 0.2;
    // Experience contributes 5% to the total
    experienceContribution = general.getExperience() * 0.1;
    
    // Total contribution is the sum of contributions from all attributes
    totalContribution = skillContribution + agilityContribution + strengthContribution +
                        speedContribution + Health_Endurance_Stamina + experienceContribution;
    
    // Calculate the percentage contribution out of a maximum possible contribution of 600
    percentageContribution = (totalContribution * 100) / 600;
}

// Function to retrieve the total contribution percentage
double VictoryContributions::getTotalContribution() const {
    return percentageContribution;
}
