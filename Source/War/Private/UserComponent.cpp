#include "UserComponent.h"
#include "Net/UnrealNetwork.h"

void UUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUserComponent, AssociatedActor);
}

UUserComponent::UUserComponent() {
}

