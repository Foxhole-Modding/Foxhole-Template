#include "StockpileUserComponent.h"
#include "Net/UnrealNetwork.h"

class UActorComponent;
class UGenericStockpileComponent;

void UStockpileUserComponent::ServerBeginRetrieve_Implementation(UActorComponent* RetrieveFromStockpileComponent, UGenericStockpileComponent* RetrieveToStockpileComponent, const FString& StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const bool bIsRetrievingMulti) {
}
bool UStockpileUserComponent::ServerBeginRetrieve_Validate(UActorComponent* RetrieveFromStockpileComponent, UGenericStockpileComponent* RetrieveToStockpileComponent, const FString& StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const bool bIsRetrievingMulti) {
    return true;
}

void UStockpileUserComponent::OnRep_Vehicles() {
}

void UStockpileUserComponent::OnRep_VehicleCrates() {
}

void UStockpileUserComponent::OnRep_Structures() {
}

void UStockpileUserComponent::OnRep_StructureCrates() {
}

void UStockpileUserComponent::OnRep_Items() {
}

void UStockpileUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStockpileUserComponent, Items);
    DOREPLIFETIME(UStockpileUserComponent, ReservableItemCrates);
    DOREPLIFETIME(UStockpileUserComponent, Vehicles);
    DOREPLIFETIME(UStockpileUserComponent, VehicleCrates);
    DOREPLIFETIME(UStockpileUserComponent, Structures);
    DOREPLIFETIME(UStockpileUserComponent, StructureCrates);
}

UStockpileUserComponent::UStockpileUserComponent() {
}

