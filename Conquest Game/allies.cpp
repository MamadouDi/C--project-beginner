#include "allies.h"
#include <string>

using namespace std;

// This file defines the methods for the Allies, Maoroland, and Gerarldberg classes,
// which represent different factions and their respective military forces in the game.

// Allies class methods

// Sets the cannon count to zero for an Allies object.
void Allies::setCannon() {
    cannon = 0;
}

// Returns the current cannon count for an Allies object.
int Allies::getCannon() {
    return cannon;
}

// Sets the swordsmen count to zero for an Allies object.
void Allies::setSwordsmen(){
    swordsmen = 0;
}

// Returns the current swordsmen count for an Allies object.
int Allies::getSwordsmen(){
    return swordsmen;
}

// Sets the archers count to zero for an Allies object.
void Allies::setArchers(){
    archers = 0;
}

// Returns the current archers count for an Allies object.
int Allies::getArchers(){
    return archers;
}

// Sets the spearmen count to zero for an Allies object.
void Allies::setSpearmen(){
    spearmen = 0;
}

// Returns the current spearmen count for an Allies object.
int Allies::getSpearmen(){
    return spearmen;
}

// Sets the total soldiers count to zero for an Allies object.
void Allies::setSoldiers(){
    soldiers = 0;
}

// Returns the current total soldiers count for an Allies object.
int Allies::getSoldiers(){
    return soldiers;
}

// Maoroland class methods

// Constructor for Maoroland, initializing its military forces.
Maoroland::Maoroland() {
    m_cannon = 15;
    m_swordsmen = 1475;
    m_archers = 589;
    m_spearmen = 256;
}

// Returns the current cannon count for Maoroland.
int Maoroland::getCannon() {
    return m_cannon;
}

// Returns the current swordsmen count for Maoroland.
int Maoroland::getSwordsmen(){
    return m_swordsmen;
}

// Returns the current archers count for Maoroland.
int Maoroland::getArchers(){
    return m_archers;
}

// Returns the current spearmen count for Maoroland.
int Maoroland::getSpearmen(){
    return m_spearmen;
}

// Calculates and returns the total soldiers count for Maoroland.
int Maoroland::getSoldiers(){
    return m_soldiers = m_archers + m_spearmen + m_swordsmen;
}

// Generates a description of Maoroland's military forces.
string Maoroland::getMaoroland_desc(const int& m_archers, const int& m_spearmen, const int& m_swordsmen, const int& m_soldiers, const int& m_cannon){
    return "\nMaoroland army is made of " + to_string(m_swordsmen) + " swordsmen, " + to_string(m_archers) + " archers, " + to_string(m_spearmen) + " spearmen. Which is a total of " + to_string(m_soldiers) + " soldiers. Moreover, Maoroland has a total of " + to_string(m_cannon) + " cannons.";
}

// Gerarldberg class methods

// Constructor for Gerarldberg, initializing its military forces.
Gerarldberg::Gerarldberg() {
    g_cannon = 20;
    g_swordsmen = 2345;
    g_archers = 678;
    g_spearmen = 378;
}

// Returns the current cannon count for Gerarldberg.
int Gerarldberg::getCannon() {
    return g_cannon;
}

// Returns the current swordsmen count for Gerarldberg.
int Gerarldberg::getSwordsmen(){
    return g_swordsmen;
}

// Returns the current archers count for Gerarldberg.
int Gerarldberg::getArchers(){
    return g_archers;
}

// Returns the current spearmen count for Gerarldberg.
int Gerarldberg::getSpearmen(){
    return g_spearmen;
}

// Calculates and returns the total soldiers count for Gerarldberg.
int Gerarldberg::getSoldiers(){
    return g_soldiers = g_archers + g_spearmen + g_swordsmen;
}

// Generates a description of Gerarldberg's military forces.
string Gerarldberg::getGerarldberg_desc(const int& g_archers, const int& g_spearmen, const int& g_swordsmen, const int& g_soldiers, const int& g_cannon){
    return "\nAs for Gerarldberg, it has an army of " + to_string(g_swordsmen) + " swordsmen, " + to_string(g_archers) + " archers, " + to_string(g_spearmen) + " spearmen. Which is a total of " + to_string(g_soldiers) + " soldiers. Moreover, Gerarldberg has a total of " + to_string(g_cannon) + " cannons.";
}


