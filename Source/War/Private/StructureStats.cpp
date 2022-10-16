#include "StructureStats.h"

FStructureStats::FStructureStats() {
    this->Structure = NULL;
    this->DecayRemainingTime_Sec = 0.00f;
    this->DecayAmount = 0.00f;
    this->bShouldDecay = false;
    this->bDecayPreventedByBase = false;
    this->bIsBuildSite = false;
    this->Health = 0;
    this->MaxHealth = 0;
    this->ConcreteProgress = 0.00f;
    this->IslandHealth = 0.00f;
    this->Suppression = 0.00f;
}

