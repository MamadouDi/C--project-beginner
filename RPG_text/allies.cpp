#include "allies.h"
#include <string>

using namespace std;

void Allies::setCannon() {
    cannon = 0;
}

int Allies::getCannon() {
    return cannon;
}

void Allies::setSwordsmen(){
    swordsmen = 0;
}

int Allies::getSwordsmen(){
    return swordsmen;
}

void Allies::setArchers(){
    archers = 0;
}
int Allies::getArchers(){
    return archers;
}

void Allies::setSpearmen(){
    spearmen = 0;
}
int Allies::getSpearmen(){
    return spearmen;
}

void Allies::setSoldiers(){
    soldiers = 0;
}
int Allies::getSoldiers(){
    return soldiers;
}

//Maoroland's military power
Maoroland::Maoroland() {
    m_cannon = 15;
    m_swordsmen = 1475;
    m_archers = 589;
    m_spearmen = 256;
}

int Maoroland::getCannon() {
    return m_cannon;
}



int Maoroland::getSwordsmen(){
    return m_swordsmen;
}


int Maoroland::getArchers(){
    return m_archers;
}



int Maoroland::getSpearmen(){
    return m_spearmen;
}



int Maoroland::getSoldiers(){
    return m_soldiers = m_archers+m_spearmen+m_swordsmen;
}


string Maoroland::getString(const string& kingdom) {
    return "Maoroland's condition to join " + kingdom + " is to get 15% of the spoils of war, "
           "and since they lack gold and uranium, they wish to be provisioned from " + kingdom + "'s resources. "
           "In exchange, " + kingdom + " will receive some of their natural resources and full military support. "
           "The same terms apply to Gerarldberg.";
}


string Maoroland::getMaoroland_desc(const int& m_archers, const int& m_spearmen, const int& m_swordsmen, const int& m_soldiers, const int& m_cannon){
    return "\nMaoroland military power is made of " + to_string(m_swordsmen) +" swordsmen, " + to_string(m_archers)+" archers, "+ to_string(m_spearmen)+" spearmen. Which is a total of "+ to_string(m_soldiers)+" soldiers.Moreover, Maoraland has a total of "+ to_string(m_cannon)+" of cannon.";
    
}

Gerarldberg::Gerarldberg() {
    g_cannon = 20;
    g_swordsmen = 2345;
    g_archers =678 ;
    g_spearmen = 378;
}

int Gerarldberg::getCannon() {
    return g_cannon;
}



int Gerarldberg::getSwordsmen(){
    return g_swordsmen;
}


int Gerarldberg::getArchers(){
    return g_archers;
}



int Gerarldberg::getSpearmen(){
    return g_spearmen;
}



int Gerarldberg::getSoldiers(){
    return g_soldiers = g_archers+g_spearmen+g_swordsmen;
}

string Gerarldberg::getGerarldberg_desc(const int& g_archers, const int& g_spearmen, const int& g_swordsmen, const int& g_soldiers, const int& g_cannon){
    return "\nGerarldberg's military power is made of " + to_string(g_swordsmen) +" swordsmen, " + to_string(g_archers)+" archers, "+ to_string(g_spearmen)+" spearmen. Which is a total of "+ to_string(g_soldiers)+" soldiers.Moreover, Gerarldberg has a total of "+ to_string(g_cannon)+" of cannon.";
    
}