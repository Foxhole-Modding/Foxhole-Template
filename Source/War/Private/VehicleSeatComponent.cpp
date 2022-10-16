#include "VehicleSeatComponent.h"

UVehicleSeatComponent::UVehicleSeatComponent() {
    this->Index = 0;
    this->Direction = ESeatDirection::None;
    this->MountComponent = NULL;
    this->bIsSwitchable = true;
    this->bIsExposed = false;
    this->bCanFireWeapon = false;
    this->bIsWoundable = false;
    this->bIsEnabled = true;
    this->bOverrideAsPassenger = false;
    this->EnterSFX = NULL;
    this->Trigger = NULL;
    this->Exit = NULL;
    this->PC = NULL;
    this->Character = NULL;
}

