#include "PlayerActivity.h"

FPlayerActivity::FPlayerActivity() {
    this->EnemyPlayerDamage = 0.00f;
    this->FriendlyPlayerDamage = 0.00f;
    this->EnemyDamage = 0.00f;
    this->FriendlyDamage = 0.00f;
    this->FriendlyConstruction = 0;
    this->FriendlyRepairing = 0;
    this->FriendlyHealing = 0.00f;
    this->FriendlyRevivals = 0;
    this->VehiclesTransferred = 0;
    this->VehicleSelfDamage = 0.00f;
    this->MaterialsSubmitted = 0;
    this->MaterialsGathered = 0;
    this->SuppliesDelivered = 0;
}

