#include "ReserveStockpileUserComponent.h"
#include "Net/UnrealNetwork.h"

class AContainer;
class ASimVehicle;
class AActor;
class UItemHolderComponent;
class AShippableCrate;

void UReserveStockpileUserComponent::ServerTransferRequestToPublic_Implementation(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType) {
}
bool UReserveStockpileUserComponent::ServerTransferRequestToPublic_Validate(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType) {
    return true;
}

void UReserveStockpileUserComponent::ServerTransferRequestFromReserveToReserve_Implementation(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType) {
}
bool UReserveStockpileUserComponent::ServerTransferRequestFromReserveToReserve_Validate(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType) {
    return true;
}

void UReserveStockpileUserComponent::ServerTransferItemFromReserveToReserve_Implementation(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity) {
}
bool UReserveStockpileUserComponent::ServerTransferItemFromReserveToReserve_Validate(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity) {
    return true;
}

void UReserveStockpileUserComponent::ServerTransferItemFromReserveToPublic_Implementation(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity) {
}
bool UReserveStockpileUserComponent::ServerTransferItemFromReserveToPublic_Validate(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitVehicle_Implementation(const FString& TargetStockpileName, AActor* DestinationActor, ASimVehicle* Vehicle) {
}
bool UReserveStockpileUserComponent::ServerSubmitVehicle_Validate(const FString& TargetStockpileName, AActor* DestinationActor, ASimVehicle* Vehicle) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitShippableCrate_Implementation(const FString& TargetStockpileName, AActor* DestinationActor, AShippableCrate* ShippableCrate) {
}
bool UReserveStockpileUserComponent::ServerSubmitShippableCrate_Validate(const FString& TargetStockpileName, AActor* DestinationActor, AShippableCrate* ShippableCrate) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitItemsFromPlayerStockpileFiltered_Implementation(const FString& TargetStockpileName, AActor* DestinationActor, const FStockpileEntry ItemFilter) {
}
bool UReserveStockpileUserComponent::ServerSubmitItemsFromPlayerStockpileFiltered_Validate(const FString& TargetStockpileName, AActor* DestinationActor, const FStockpileEntry ItemFilter) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitItemsFromPlayerStockpile_Implementation(const FString& TargetStockpileName, AActor* DestinationActor) {
}
bool UReserveStockpileUserComponent::ServerSubmitItemsFromPlayerStockpile_Validate(const FString& TargetStockpileName, AActor* DestinationActor) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitItemsFromItemHolderFiltered_Implementation(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter) {
}
bool UReserveStockpileUserComponent::ServerSubmitItemsFromItemHolderFiltered_Validate(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitItemsFromItemHolder_Implementation(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder) {
}
bool UReserveStockpileUserComponent::ServerSubmitItemsFromItemHolder_Validate(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder) {
    return true;
}

void UReserveStockpileUserComponent::ServerSubmitContainer_Implementation(const FString& TargetStockpile, AActor* DestinationActor, AContainer* Container) {
}
bool UReserveStockpileUserComponent::ServerSubmitContainer_Validate(const FString& TargetStockpile, AActor* DestinationActor, AContainer* Container) {
    return true;
}

void UReserveStockpileUserComponent::ServerReleaseStockpile_Implementation(const FString& StockpileName) {
}
bool UReserveStockpileUserComponent::ServerReleaseStockpile_Validate(const FString& StockpileName) {
    return true;
}

void UReserveStockpileUserComponent::ServerRefreshExpiryTime_Implementation() {
}
bool UReserveStockpileUserComponent::ServerRefreshExpiryTime_Validate() {
    return true;
}

void UReserveStockpileUserComponent::ServerMakeVisible_Implementation(const FString& TargetStockpileName, const bool bMakeVisible) {
}
bool UReserveStockpileUserComponent::ServerMakeVisible_Validate(const FString& TargetStockpileName, const bool bMakeVisible) {
    return true;
}

void UReserveStockpileUserComponent::ServerCreateStockpile_Implementation(const FString& StockpileName) {
}
bool UReserveStockpileUserComponent::ServerCreateStockpile_Validate(const FString& StockpileName) {
    return true;
}

void UReserveStockpileUserComponent::ServerAccessStockpile_Implementation(const int32 PassCode) {
}
bool UReserveStockpileUserComponent::ServerAccessStockpile_Validate(const int32 PassCode) {
    return true;
}

void UReserveStockpileUserComponent::OnRep_StockpileData(const TArray<FReserveStockpileData>& PreviousStockpileDataList) {
}

void UReserveStockpileUserComponent::ClientShowStockpileResponse_Implementation(const ETransactionResponse Response) {
}

void UReserveStockpileUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReserveStockpileUserComponent, StockpileDataList);
    DOREPLIFETIME(UReserveStockpileUserComponent, FailedPassCodeAttemptInfo);
}

UReserveStockpileUserComponent::UReserveStockpileUserComponent() {
    this->ReserveStockpileBeingUsed = NULL;
}

