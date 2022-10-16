#include "SpecializedFactoryOrder.h"

FSpecializedFactoryOrder::FSpecializedFactoryOrder() {
    this->FactionId = EFactionId::Colonials;
    this->AccessLevel = EFactoryOrderAccess::Personal;
    this->SquadId = 0;
    this->ProductionTimeMultiplier = 0.00f;
    this->CompleteTime = 0.00f;
}

