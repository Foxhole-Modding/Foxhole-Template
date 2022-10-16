#include "GenericStockpileComponent.h"
#include "Net/UnrealNetwork.h"

void UGenericStockpileComponent::OnRep_Items() {
}

void UGenericStockpileComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGenericStockpileComponent, Items);
}

UGenericStockpileComponent::UGenericStockpileComponent() {
    this->RetrieveDurationModifier = 1.00f;
    this->bAllowWaterVehicles = false;
    this->bCloseUIWhenRetrieving = false;
    this->bRequireFullItemStockpileToSubmit = false;
    this->bAllowNeutralSubmissions = false;
    this->bAllowDirectRetrievals = true;
    this->ValueDebt = 0;
}

