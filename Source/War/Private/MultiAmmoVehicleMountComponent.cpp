#include "MultiAmmoVehicleMountComponent.h"
#include "Net/UnrealNetwork.h"

void UMultiAmmoVehicleMountComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UMultiAmmoVehicleMountComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UMultiAmmoVehicleMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMultiAmmoVehicleMountComponent, MultiAmmo);
}

UMultiAmmoVehicleMountComponent::UMultiAmmoVehicleMountComponent() {
    this->bRequiresExternalReload = false;
}

