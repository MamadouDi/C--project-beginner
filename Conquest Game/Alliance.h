#ifndef ALLIANCE_H
#define ALLIANCE_H
#include <string>
using namespace std;

// Represents the alliance relationships and agreements
class alliance {
public:
    // Provides a description of the alliance situation
    string allies();
    
    // Provides a description of the specific terms of the alliance
    string allies2(const string& Kingdom);
};

#endif
