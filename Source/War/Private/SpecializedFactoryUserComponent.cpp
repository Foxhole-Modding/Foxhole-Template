#include "SpecializedFactoryUserComponent.h"
#include "Net/UnrealNetwork.h"

void USpecializedFactoryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpecializedFactoryUserComponent, Queues);
}

USpecializedFactoryUserComponent::USpecializedFactoryUserComponent() {
}

