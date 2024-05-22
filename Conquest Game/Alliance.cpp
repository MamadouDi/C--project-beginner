#include "Alliance.h"
#include <string>

// This file defines the methods for the Alliance class, which represent the relationships
// and agreements between the player's kingdom and their allies, Maoroland and Gerarldberg.


// Returns a description of the alliance situation in the player's continent,
// emphasizing the presence of two supportive allies amidst five powerful enemies.
string alliance::allies() {
    return "In your continent, you have five enemies with humongous military power. However, two allies are ready to sacrifice their men to assist you: Maoroland and Gerarldberg.";
}

// Returns a description of the specific terms of the alliance with the player's kingdom,
// including the division of spoils and resource provisions.
string alliance::allies2(const string& Kingdom) {
    return "Your allies joined " + Kingdom + " under the condition that they will get 15% of the spoils of war, "
           "and since they lack gold and uranium, they wish to be provisioned from " + Kingdom + "'s resources. "
           "In exchange, " + Kingdom + " will receive some of their natural resources and full military support.";
}
