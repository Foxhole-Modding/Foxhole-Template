#include "ExplosiveItemComponent.h"
#include "Net/UnrealNetwork.h"

void UExplosiveItemComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UExplosiveItemComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UExplosiveItemComponent::OnRep_IsEquipped() {
}

void UExplosiveItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UExplosiveItemComponent, bIsEquipped);
}

UExplosiveItemComponent::UExplosiveItemComponent() {
    this->DeployDuration = 0.00f;
    this->ExplosiveClass = NULL;
    this->DeploySound = NULL;
    this->ShouldShowDetonationMessage = true;
    this->bPreventBorderPlacement = false;
    this->ShouldDoLandscapeCheck = false;
    this->bIsEquipped = false;
}

