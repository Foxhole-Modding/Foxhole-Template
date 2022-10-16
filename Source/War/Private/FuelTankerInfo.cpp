#include "FuelTankerInfo.h"

FFuelTankerInfo::FFuelTankerInfo() {
    this->OwnerActor = NULL;
    this->OwnerItemHolder = NULL;
    this->OwnerGenericStockpile = NULL;
    this->OwnerStealthComponent = NULL;
    this->RefuelAudioComponent = NULL;
    this->AmountRefueledPerSecond = 0.00f;
    this->RefuelCycleDuration = 0.00f;
    this->RefuelActivateSound = NULL;
    this->RefuelSoundLoop = NULL;
    this->RefuelCableMaterial = NULL;
    this->RefuelCableComponent = NULL;
    this->TargetActorToRefuel = NULL;
}

