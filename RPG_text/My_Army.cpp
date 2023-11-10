#include "My_Army.hpp"

My_Army::My_Army() {
    swordsmen = 3896;
    archers = 789;
    spearmen = 478;
    cannon = 30;
    soldiers = swordsmen + archers + spearmen;
}

void My_Army::setSoldier(int value) {
    soldiers = value;
}

void My_Army::setCannon(int value) {
    cannon = value;
}

void My_Army::setSpearmen(int value) {
    spearmen = value;
}

void My_Army::setArchers(int value) {
    archers = value;
}

void My_Army::setSwordsmen(int value) {
    swordsmen = value;
}

int My_Army::getSoldiers() {
    return soldiers;
}

int My_Army::getArchers() {
    return archers;
}

int My_Army::getCannon() {
    return cannon;
}

int My_Army::getSwordsmen() {
    return swordsmen;
}

int My_Army::getSpearmen() {
    return spearmen;
}
