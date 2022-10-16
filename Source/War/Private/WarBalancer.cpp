#include "WarBalancer.h"

FWarBalancer::FWarBalancer() {
    this->NumImbalanceIterations = 0;
    this->RunningPopulationImbalancePercent = 0.00f;
    this->CurrentAbsoluteMaxPopulation = 0;
}

