#include "MultiAmmoStructureMountComponent.h"
#include "Net/UnrealNetwork.h"

void UMultiAmmoStructureMountComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UMultiAmmoStructureMountComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UMultiAmmoStructureMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMultiAmmoStructureMountComponent, MultiAmmo);
}

UMultiAmmoStructureMountComponent::UMultiAmmoStructureMountComponent() {
}

