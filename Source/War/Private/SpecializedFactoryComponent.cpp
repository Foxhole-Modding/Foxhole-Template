#include "SpecializedFactoryComponent.h"
#include "Net/UnrealNetwork.h"

bool USpecializedFactoryComponent::IsProducing() const {
    return false;
}

void USpecializedFactoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpecializedFactoryComponent, bIsProducing);
}

USpecializedFactoryComponent::USpecializedFactoryComponent() {
    this->MaxOrderSize = 4;
    this->MaxQueueSize = 4;
    this->MaxCompletedOrders = 20;
    this->CraftUpdateCycleSeconds = 0.50f;
    this->CompletedOrderExpiryTime = 3600.00f;
    this->ProductionTimeMultiplier = 1.00f;
    this->MassProductionDiscountPerItem = 0.00f;
    this->MassProductionMaxDiscount = 0.00f;
    this->bIsMassProductionSupported = false;
    this->MassProductionMinOrderSize = 3;
    this->bAutoAddVehicleProductionCategory = false;
    this->bAutoAddStructureProductionCategory = false;
    this->bIsProducing = false;
}

