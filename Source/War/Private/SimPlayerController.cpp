#include "SimPlayerController.h"
#include "Net/UnrealNetwork.h"

class ASimPlayerState;
class ASignPost;
class AVehicleFactory;
class UActorComponent;
class AStructure;
class USpecializedFactoryComponent;
class AAssemblyStation;
class ARocketFacility;
class ASimVehicle;
class UItemHolderComponent;
class ABuildableStructure;
class AStorageFacility;
class AActor;
class ARefinery;
class AHospital;
class ATeamStructure;
class AShippableCrate;
class AContainer;
class AShippingContainer;
class UGenericStockpileComponent;
class UObject;
class ASimCharacter;
class AConstructionSite;
class APlayerState;

void ASimPlayerController::WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, const FString& TestStr, const ETestEnum TestEnum) {
}

void ASimPlayerController::TunnelNetworkDebugDraw() {
}

void ASimPlayerController::ToggleStabilityDebug() {
}

void ASimPlayerController::ToggleShowMouseCursor() {
}

void ASimPlayerController::TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw) {
}

void ASimPlayerController::StructureIslandDebugDraw() {
}

void ASimPlayerController::SpawnAllVehicles(int32 PerVehicleCount) {
}

void ASimPlayerController::SpawnAllStructures(int32 PerStructureCount) {
}

void ASimPlayerController::SimulateDeath(const bool bWipeItems, int32 AfterSeconds) {
}

void ASimPlayerController::ServerWhisper_Implementation(const FString& TargetOnlineID, const FString& Message) {
}
bool ASimPlayerController::ServerWhisper_Validate(const FString& TargetOnlineID, const FString& Message) {
    return true;
}

void ASimPlayerController::ServerWarMessageTest_Implementation(const FWarMessageTest& Message) {
}
bool ASimPlayerController::ServerWarMessageTest_Validate(const FWarMessageTest& Message) {
    return true;
}

void ASimPlayerController::ServerVoteOnSignPost_Implementation(const bool bIsUpVote, ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerVoteOnSignPost_Validate(const bool bIsUpVote, ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerVoteOnChatMessage_Implementation(const FString& TargetOnlineID, const bool bIsUpVote) {
}
bool ASimPlayerController::ServerVoteOnChatMessage_Validate(const FString& TargetOnlineID, const bool bIsUpVote) {
    return true;
}

void ASimPlayerController::ServerVoteKick_Implementation(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory) {
}
bool ASimPlayerController::ServerVoteKick_Validate(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory) {
    return true;
}

void ASimPlayerController::ServerUpgradeVehicle_Implementation(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
}
bool ASimPlayerController::ServerUpgradeVehicle_Validate(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
    return true;
}

void ASimPlayerController::ServerUpgradeTargetStructure_Implementation(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation) {
}
bool ASimPlayerController::ServerUpgradeTargetStructure_Validate(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation) {
    return true;
}

void ASimPlayerController::ServerUpgradeStaticTargetStructure_Implementation(AStructure* TargetStructure, FName UpgradeCodename) {
}
bool ASimPlayerController::ServerUpgradeStaticTargetStructure_Validate(AStructure* TargetStructure, FName UpgradeCodename) {
    return true;
}

void ASimPlayerController::ServerUpdateInfo_Implementation(const uint32 Info) {
}
bool ASimPlayerController::ServerUpdateInfo_Validate(const uint32 Info) {
    return true;
}

void ASimPlayerController::ServerUnpackShippableCrate_Implementation(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName) {
}
bool ASimPlayerController::ServerUnpackShippableCrate_Validate(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName) {
    return true;
}

void ASimPlayerController::ServerUnCrateItems_Implementation(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
}
bool ASimPlayerController::ServerUnCrateItems_Validate(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
    return true;
}

void ASimPlayerController::ServerTransferItem_Implementation(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit) {
}
bool ASimPlayerController::ServerTransferItem_Validate(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit) {
    return true;
}

void ASimPlayerController::ServerToggleVehicleLock_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerToggleVehicleLock_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerTimeRequest_Implementation(float RequestTime) {
}
bool ASimPlayerController::ServerTimeRequest_Validate(float RequestTime) {
    return true;
}

void ASimPlayerController::ServerTeleportToLocation_Implementation(const FVector& WorldPosition) {
}
bool ASimPlayerController::ServerTeleportToLocation_Validate(const FVector& WorldPosition) {
    return true;
}

void ASimPlayerController::ServerSyncWorldPlayerId_Implementation() {
}
bool ASimPlayerController::ServerSyncWorldPlayerId_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncTravelMaps_Implementation() {
}
bool ASimPlayerController::ServerSyncTravelMaps_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncTimeToNextWar_Implementation() {
}
bool ASimPlayerController::ServerSyncTimeToNextWar_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncStaticRegionMapData_Implementation() {
}
bool ASimPlayerController::ServerSyncStaticRegionMapData_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncDynamicRegionMapData_Implementation() {
}
bool ASimPlayerController::ServerSyncDynamicRegionMapData_Validate() {
    return true;
}

void ASimPlayerController::ServerSwapEquipment_Implementation(const int8 BackpackItemIndex) {
}
bool ASimPlayerController::ServerSwapEquipment_Validate(const int8 BackpackItemIndex) {
    return true;
}

void ASimPlayerController::ServerSubmitVehicleToStockpile_Implementation(AStorageFacility* StorageFacility, ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerSubmitVehicleToStockpile_Validate(AStorageFacility* StorageFacility, ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerSubmitTech_Implementation(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex) {
}
bool ASimPlayerController::ServerSubmitTech_Validate(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex) {
    return true;
}

void ASimPlayerController::ServerSubmitStructureToStockpile_Implementation(AStorageFacility* StorageFacility, ABuildableStructure* Structure, const FString& TargetStockpileName) {
}
bool ASimPlayerController::ServerSubmitStructureToStockpile_Validate(AStorageFacility* StorageFacility, ABuildableStructure* Structure, const FString& TargetStockpileName) {
    return true;
}

void ASimPlayerController::ServerSubmitStarterKit_Implementation(AStructure* Structure) {
}
bool ASimPlayerController::ServerSubmitStarterKit_Validate(AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerSubmitResourceConverterOrder_Implementation(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerSubmitResourceConverterOrder_Validate(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerSubmitRefinementOrderWithLimit_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit) {
}
bool ASimPlayerController::ServerSubmitRefinementOrderWithLimit_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit) {
    return true;
}

void ASimPlayerController::ServerSubmitRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerSubmitRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerSubmitPatients_Implementation(AHospital* Hospital) {
}
bool ASimPlayerController::ServerSubmitPatients_Validate(AHospital* Hospital) {
    return true;
}

void ASimPlayerController::ServerSubmitLargeItem_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerSubmitLargeItem_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolderWithItemFilter_Implementation(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter) {
}
bool ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolderWithItemFilter_Validate(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolder_Implementation(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder) {
}
bool ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolder_Validate(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered_Implementation(AActor* DestinationActor, const FStockpileEntry ItemFilter) {
}
bool ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered_Validate(AActor* DestinationActor, const FStockpileEntry ItemFilter) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpile_Implementation(AActor* DestinationActor) {
}
bool ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpile_Validate(AActor* DestinationActor) {
    return true;
}

void ASimPlayerController::ServerSubmitFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems) {
}
bool ASimPlayerController::ServerSubmitFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems) {
    return true;
}

void ASimPlayerController::ServerSubmitCrateToStockpile_Implementation(AStorageFacility* StorageFacility, AShippableCrate* ShippableCrate, const bool bSubmitToPublic) {
}
bool ASimPlayerController::ServerSubmitCrateToStockpile_Validate(AStorageFacility* StorageFacility, AShippableCrate* ShippableCrate, const bool bSubmitToPublic) {
    return true;
}

void ASimPlayerController::ServerSubmitContainerToStockpile_Implementation(AStructure* Structure, AContainer* Container) {
}
bool ASimPlayerController::ServerSubmitContainerToStockpile_Validate(AStructure* Structure, AContainer* Container) {
    return true;
}

void ASimPlayerController::ServerStopRefuelingActorInUse_Implementation(AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
}
bool ASimPlayerController::ServerStopRefuelingActorInUse_Validate(AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
    return true;
}

void ASimPlayerController::ServerSplitItemStack_Implementation(UItemHolderComponent* TargetItemHolder, int8 FromIndex) {
}
bool ASimPlayerController::ServerSplitItemStack_Validate(UItemHolderComponent* TargetItemHolder, int8 FromIndex) {
    return true;
}

void ASimPlayerController::ServerSpectateSpawnPoint_Implementation() {
}
bool ASimPlayerController::ServerSpectateSpawnPoint_Validate() {
    return true;
}

void ASimPlayerController::ServerSpectate_Implementation(const int8 Delta, const bool bAllowSpectatorCameraFallback) {
}
bool ASimPlayerController::ServerSpectate_Validate(const int8 Delta, const bool bAllowSpectatorCameraFallback) {
    return true;
}

void ASimPlayerController::ServerSpawnAllVehicles_Implementation(int32 PerVehicleCount) {
}
bool ASimPlayerController::ServerSpawnAllVehicles_Validate(int32 PerVehicleCount) {
    return true;
}

void ASimPlayerController::ServerSpawnAllStructures_Implementation(int32 PerStructureCount) {
}
bool ASimPlayerController::ServerSpawnAllStructures_Validate(int32 PerStructureCount) {
    return true;
}

void ASimPlayerController::ServerSortWreckage_Implementation(UItemHolderComponent* SourceItemHolder) {
}
bool ASimPlayerController::ServerSortWreckage_Validate(UItemHolderComponent* SourceItemHolder) {
    return true;
}

void ASimPlayerController::ServerSimulateDeath_Implementation(const bool bWipeItems, int32 AfterSeconds) {
}
bool ASimPlayerController::ServerSimulateDeath_Validate(const bool bWipeItems, int32 AfterSeconds) {
    return true;
}

void ASimPlayerController::ServerSetVehicleLock_Implementation(ASimVehicle* SimVehicle, const bool bIsLocked) {
}
bool ASimPlayerController::ServerSetVehicleLock_Validate(ASimVehicle* SimVehicle, const bool bIsLocked) {
    return true;
}

void ASimPlayerController::ServerSetStructureColor_Implementation(AShippingContainer* ShippingContainer, const uint8 Color) {
}
bool ASimPlayerController::ServerSetStructureColor_Validate(AShippingContainer* ShippingContainer, const uint8 Color) {
    return true;
}

void ASimPlayerController::ServerSetSpawnPoint_Implementation(AStructure* NewSpawnPoint) {
}
bool ASimPlayerController::ServerSetSpawnPoint_Validate(AStructure* NewSpawnPoint) {
    return true;
}

void ASimPlayerController::ServerSetRefineryOrderAccessLevel_Implementation(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel) {
}
bool ASimPlayerController::ServerSetRefineryOrderAccessLevel_Validate(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel) {
    return true;
}

void ASimPlayerController::ServerSetPowerGridConnectionState_Implementation(AActor* LHSActor, AActor* RHSActor, const bool bWantsItConnected) {
}
bool ASimPlayerController::ServerSetPowerGridConnectionState_Validate(AActor* LHSActor, AActor* RHSActor, const bool bWantsItConnected) {
    return true;
}

void ASimPlayerController::ServerSetOutfitType_Implementation(const EOutfitType OutfitType, const bool bBypassVipCheck) {
}
bool ASimPlayerController::ServerSetOutfitType_Validate(const EOutfitType OutfitType, const bool bBypassVipCheck) {
    return true;
}

void ASimPlayerController::ServerSetInventorySourceOverride_Implementation(UActorComponent* InventorySourceOverride) {
}
bool ASimPlayerController::ServerSetInventorySourceOverride_Validate(UActorComponent* InventorySourceOverride) {
    return true;
}

void ASimPlayerController::ServerSetCharacterCustomizationInfo_Implementation(const FCharacterCustomizationInfo CustomizationInfo) {
}
bool ASimPlayerController::ServerSetCharacterCustomizationInfo_Validate(const FCharacterCustomizationInfo CustomizationInfo) {
    return true;
}

void ASimPlayerController::ServerSetCameraFlags_Implementation(int32 Flags, AActor* Actor) {
}
bool ASimPlayerController::ServerSetCameraFlags_Validate(int32 Flags, AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerSetAdminCommandTarget_Implementation(AActor* TargetActor) {
}
bool ASimPlayerController::ServerSetAdminCommandTarget_Validate(AActor* TargetActor) {
    return true;
}

void ASimPlayerController::ServerRespawnDefault_Implementation() {
}
bool ASimPlayerController::ServerRespawnDefault_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtNearestStaticBase_Implementation() {
}
bool ASimPlayerController::ServerRespawnAtNearestStaticBase_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtNearestSafeHouse_Implementation() {
}
bool ASimPlayerController::ServerRespawnAtNearestSafeHouse_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtAssignedPoint_Implementation(const uint8 Category) {
}
bool ASimPlayerController::ServerRespawnAtAssignedPoint_Validate(const uint8 Category) {
    return true;
}

void ASimPlayerController::ServerResetPowerGridConnectionState_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerResetPowerGridConnectionState_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerResetInventorySourceOverride_Implementation() {
}
bool ASimPlayerController::ServerResetInventorySourceOverride_Validate() {
    return true;
}

void ASimPlayerController::ServerRequestStructureInfo_Implementation(AStructure* Structure, const bool bIsInitialRequest) {
}
bool ASimPlayerController::ServerRequestStructureInfo_Validate(AStructure* Structure, const bool bIsInitialRequest) {
    return true;
}

void ASimPlayerController::ServerRequestStockpileAccessEvents_Implementation(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index) {
}
bool ASimPlayerController::ServerRequestStockpileAccessEvents_Validate(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index) {
    return true;
}

void ASimPlayerController::ServerRequestRegionMinimalData_Implementation(const EWorldConquestMapId MapId) {
}
bool ASimPlayerController::ServerRequestRegionMinimalData_Validate(const EWorldConquestMapId MapId) {
    return true;
}

void ASimPlayerController::ServerRequestRegionLog_Implementation(const uint32 LogPageIndex) {
}
bool ASimPlayerController::ServerRequestRegionLog_Validate(const uint32 LogPageIndex) {
    return true;
}

void ASimPlayerController::ServerRequestOfflineActivityLog_Implementation(const FString& OnlineID) {
}
bool ASimPlayerController::ServerRequestOfflineActivityLog_Validate(const FString& OnlineID) {
    return true;
}

void ASimPlayerController::ServerRequestNetworkTechStatus_Implementation(const AStructure* Structure) {
}
bool ASimPlayerController::ServerRequestNetworkTechStatus_Validate(const AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerRequestMapItemDetails_Implementation(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber) {
}
bool ASimPlayerController::ServerRequestMapItemDetails_Validate(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber) {
    return true;
}

void ASimPlayerController::ServerRequestMapIntelligence_Implementation() {
}
bool ASimPlayerController::ServerRequestMapIntelligence_Validate() {
    return true;
}

void ASimPlayerController::ServerRequestActivityLog_Implementation(ASimPlayerState* TargetPlayerState) {
}
bool ASimPlayerController::ServerRequestActivityLog_Validate(ASimPlayerState* TargetPlayerState) {
    return true;
}

void ASimPlayerController::ServerRefuelActorInUse_Implementation(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
}
bool ASimPlayerController::ServerRefuelActorInUse_Validate(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
    return true;
}

void ASimPlayerController::ServerReconnectToVoiceChat_Implementation() {
}
bool ASimPlayerController::ServerReconnectToVoiceChat_Validate() {
    return true;
}

void ASimPlayerController::ServerReceieveInfo_Implementation() {
}
bool ASimPlayerController::ServerReceieveInfo_Validate() {
    return true;
}

void ASimPlayerController::ServerPickUpFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID) {
}
bool ASimPlayerController::ServerPickUpFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID) {
    return true;
}

void ASimPlayerController::ServerPackageShippable_Implementation(AActor* ShippableActor, const bool bWantsItPackaged) {
}
bool ASimPlayerController::ServerPackageShippable_Validate(AActor* ShippableActor, const bool bWantsItPackaged) {
    return true;
}

void ASimPlayerController::ServerOnUserResetAFKTimer_Implementation() {
}
bool ASimPlayerController::ServerOnUserResetAFKTimer_Validate() {
    return true;
}

void ASimPlayerController::ServerOnPlayerLogOut_Implementation() {
}
bool ASimPlayerController::ServerOnPlayerLogOut_Validate() {
    return true;
}

void ASimPlayerController::ServerOnNewBaseAccessed_Implementation(AStructure* AccessedBaseStructure) {
}
bool ASimPlayerController::ServerOnNewBaseAccessed_Validate(AStructure* AccessedBaseStructure) {
    return true;
}

void ASimPlayerController::ServerJoinWar_Implementation(const uint8 TeamId) {
}
bool ASimPlayerController::ServerJoinWar_Validate(const uint8 TeamId) {
    return true;
}

void ASimPlayerController::ServerGenerateVivoxChannelJoinToken_Implementation(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress) {
}
bool ASimPlayerController::ServerGenerateVivoxChannelJoinToken_Validate(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress) {
    return true;
}

void ASimPlayerController::ServerFullRepair_Implementation(AVehicleFactory* VehicleFactory) {
}
bool ASimPlayerController::ServerFullRepair_Validate(AVehicleFactory* VehicleFactory) {
    return true;
}

void ASimPlayerController::ServerFlagDisruptivePlacement_Implementation(ATeamStructure* TeamStructure) {
}
bool ASimPlayerController::ServerFlagDisruptivePlacement_Validate(ATeamStructure* TeamStructure) {
    return true;
}

void ASimPlayerController::ServerEnterRocketLaunchCode_Implementation(const FRocketLaunchCodeRequest& Request) {
}
bool ASimPlayerController::ServerEnterRocketLaunchCode_Validate(const FRocketLaunchCodeRequest& Request) {
    return true;
}

void ASimPlayerController::ServerEditSignPost_Implementation(const FText& Text, ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerEditSignPost_Validate(const FText& Text, ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerDropItem_Implementation(UItemHolderComponent* ItemHolder, const int8 ItemIndex) {
}
bool ASimPlayerController::ServerDropItem_Validate(UItemHolderComponent* ItemHolder, const int8 ItemIndex) {
    return true;
}

void ASimPlayerController::ServerDetachUserComponents_Implementation() {
}
bool ASimPlayerController::ServerDetachUserComponents_Validate() {
    return true;
}

void ASimPlayerController::ServerDetachLargeItem_Implementation(ASimVehicle* DetachTarget) {
}
bool ASimPlayerController::ServerDetachLargeItem_Validate(ASimVehicle* DetachTarget) {
    return true;
}

void ASimPlayerController::ServerDestroySignPost_Implementation(ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerDestroySignPost_Validate(ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerDeployLargeItem_Implementation(const FVector& Location, const FRotator& Rotation) {
}
bool ASimPlayerController::ServerDeployLargeItem_Validate(const FVector& Location, const FRotator& Rotation) {
    return true;
}

void ASimPlayerController::ServerDemolishStructure_Implementation(AStructure* Structure) {
}
bool ASimPlayerController::ServerDemolishStructure_Validate(AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerCrateItems_Implementation(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
}
bool ASimPlayerController::ServerCrateItems_Validate(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
    return true;
}

void ASimPlayerController::ServerConfirmAdminDestroy_Implementation(const FName ObjectName) {
}
bool ASimPlayerController::ServerConfirmAdminDestroy_Validate(const FName ObjectName) {
    return true;
}

void ASimPlayerController::ServerCommend_Implementation(const FString& PlayerOnlineId) {
}
bool ASimPlayerController::ServerCommend_Validate(const FString& PlayerOnlineId) {
    return true;
}

void ASimPlayerController::ServerCommandStringID_Implementation(const FString& ID) {
}
bool ASimPlayerController::ServerCommandStringID_Validate(const FString& ID) {
    return true;
}

void ASimPlayerController::ServerCommandID_Implementation(int8 ID) {
}
bool ASimPlayerController::ServerCommandID_Validate(int8 ID) {
    return true;
}

void ASimPlayerController::ServerClearSquad_Implementation(UObject* InCoalitionAssignable) {
}
bool ASimPlayerController::ServerClearSquad_Validate(UObject* InCoalitionAssignable) {
    return true;
}

void ASimPlayerController::ServerClaimStructureIsland_Implementation(AStructure* Structure, const int32 SelectedSquadID) {
}
bool ASimPlayerController::ServerClaimStructureIsland_Validate(AStructure* Structure, const int32 SelectedSquadID) {
    return true;
}

void ASimPlayerController::ServerClaimStructure_Implementation(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed) {
}
bool ASimPlayerController::ServerClaimStructure_Validate(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed) {
    return true;
}

void ASimPlayerController::ServerClaimResourceConverterOrder_Implementation(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerClaimResourceConverterOrder_Validate(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerClaimRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType) {
}
bool ASimPlayerController::ServerClaimRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType) {
    return true;
}

void ASimPlayerController::ServerChat_Implementation(const FString& Msg, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage) {
}
bool ASimPlayerController::ServerChat_Validate(const FString& Msg, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage) {
    return true;
}

void ASimPlayerController::ServerChangeVehicleFuelType_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerChangeVehicleFuelType_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerChangeFactoryOrderAccess_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId) {
}
bool ASimPlayerController::ServerChangeFactoryOrderAccess_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId) {
    return true;
}

void ASimPlayerController::ServerCancelRetrieval_Implementation() {
}
bool ASimPlayerController::ServerCancelRetrieval_Validate() {
    return true;
}

void ASimPlayerController::ServerCancelRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex) {
}
bool ASimPlayerController::ServerCancelRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex) {
    return true;
}

void ASimPlayerController::ServerCancelPackaging_Implementation() {
}
bool ASimPlayerController::ServerCancelPackaging_Validate() {
    return true;
}

void ASimPlayerController::ServerCancelFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type) {
}
bool ASimPlayerController::ServerCancelFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type) {
    return true;
}

void ASimPlayerController::ServerBuildVehicleFromStructure_Implementation(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
}
bool ASimPlayerController::ServerBuildVehicleFromStructure_Validate(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
    return true;
}

void ASimPlayerController::ServerBuildVehicle_Implementation(const FName CodeName, const FVector& Location, const FRotator& Rotation) {
}
bool ASimPlayerController::ServerBuildVehicle_Validate(const FName CodeName, const FVector& Location, const FRotator& Rotation) {
    return true;
}

void ASimPlayerController::ServerBuildStructureFromStructure_Implementation(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
}
bool ASimPlayerController::ServerBuildStructureFromStructure_Validate(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
    return true;
}

void ASimPlayerController::ServerBuildStructure_Implementation(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
}
bool ASimPlayerController::ServerBuildStructure_Validate(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
    return true;
}

void ASimPlayerController::ServerBuildRocket_Implementation(const FRocketBuildRequest& Request) {
}
bool ASimPlayerController::ServerBuildRocket_Validate(const FRocketBuildRequest& Request) {
    return true;
}

void ASimPlayerController::ServerBuildRailVehicle_Implementation(const FName CodeName, const FRepSnapInfo SnapInfo) {
}
bool ASimPlayerController::ServerBuildRailVehicle_Validate(const FName CodeName, const FRepSnapInfo SnapInfo) {
    return true;
}

void ASimPlayerController::ServerAttachUserComponents_Implementation(AActor* AssociatedActor) {
}
bool ASimPlayerController::ServerAttachUserComponents_Validate(AActor* AssociatedActor) {
    return true;
}

void ASimPlayerController::ServerAttachLargeItem_Implementation(AActor* AttachTarget) {
}
bool ASimPlayerController::ServerAttachLargeItem_Validate(AActor* AttachTarget) {
    return true;
}

void ASimPlayerController::ServerAssignSquad_Implementation(UObject* InCoalitionAssignable, const int32 NewSquadID) {
}
bool ASimPlayerController::ServerAssignSquad_Validate(UObject* InCoalitionAssignable, const int32 NewSquadID) {
    return true;
}

void ASimPlayerController::ServerAssembleStructureOrVehicle_Implementation(AAssemblyStation* AssemblyStation, const FName CodeName) {
}
bool ASimPlayerController::ServerAssembleStructureOrVehicle_Validate(AAssemblyStation* AssemblyStation, const FName CodeName) {
    return true;
}

void ASimPlayerController::OnRep_UserComponents() {
}

void ASimPlayerController::OnRep_PlaceInDeploymentQueue() {
}

void ASimPlayerController::OnClientTravelWaitComplete(const FString& URL) {
}

/*void ASimPlayerController::DrawDebugVehicleHitbox_Implementation(ASimVehicle* SimVehicle, FVector Position,
    FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn)
{
}*/

void ASimPlayerController::DebugRecreateLandscapeHoles() {
}

void ASimPlayerController::DebugDrawCurrentLandscape() {
}

void ASimPlayerController::ClientWorldChatMessage_Implementation(const FString& Message, const FString& SenderName, const FString& SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled) {
}

void ASimPlayerController::ClientWarEndingAlert_Implementation(int32 SecondsUntilWarEnd, int32 Duration) {
}

void ASimPlayerController::ClientVoiceLogin_Implementation(const FVoiceLoginInfo& VoiceLoginInfo) {
}

void ASimPlayerController::ClientUpdateUTCOffset_Implementation(const int64 ServerDateTimeTicks) {
}

void ASimPlayerController::ClientUpdateShardConfig_Implementation(FClientShardConfig ClientShardConfig) {
}

void ASimPlayerController::ClientUpdateRegionMinimalData_Implementation(const FRegionMinimalData& RegionMinimalData) {
}

void ASimPlayerController::ClientUpdateRegionLog_Implementation(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages) {
}

void ASimPlayerController::ClientUpdateActivityLog_Implementation(const FPlayerActivity& Activity) {
}

void ASimPlayerController::ClientTraceActivity_Implementation(FActivityStateDebugTrace NewTrace, ASimCharacter* SimCharacter) {
}

void ASimPlayerController::ClientTimeResponse_Implementation(float RequestTime, float ServerTime) {
}

void ASimPlayerController::ClientTeleportToMapMarker_Implementation(const FString& TargetMapMarkerName) {
}

void ASimPlayerController::ClientSyncWorldPlayerId_Implementation(const FString& ID) {
}

void ASimPlayerController::ClientSyncTravelMaps_Implementation(const TArray<FRegionConnectionInfo>& TravelMaps) {
}

void ASimPlayerController::ClientSyncTimeToNextWar_Implementation(const int32 Seconds) {
}

void ASimPlayerController::ClientSyncStructureClaimStatus_Implementation(AStructure* TargetStructure, const int32 SquadId, const int32 SecondsRemaining) {
}

void ASimPlayerController::ClientSyncStructureBuilderInfo_Implementation(AStructure* TargetStructure, const FString& BuilderOnlineID, const FString& BuilderName) {
}

void ASimPlayerController::ClientSyncStatsForNearbyStructures_Implementation(const TArray<FStructureStats>& StatList) {
}

void ASimPlayerController::ClientSyncStaticRegionMapData_Implementation(const FRegionMapData& StaticMapData) {
}

void ASimPlayerController::ClientSyncReplicatedTweakables_Implementation(const FWarReplicatedTweakables& NewWarRepTweakables) {
}

void ASimPlayerController::ClientSyncMapIntelligence_Implementation(const bool bOnlySyncIfMapIsOpen) {
}

void ASimPlayerController::ClientSyncGameplayParams_Implementation(const FGameplayParams& GameplayParams) {
}

void ASimPlayerController::ClientSyncDynamicRegionMapData_Implementation(const FRegionMapData& RegionMapData) {
}

void ASimPlayerController::ClientSurrenderAlert_Implementation() {
}

void ASimPlayerController::ClientStopSpectateTargetTick_Implementation() {
}

void ASimPlayerController::ClientStartRespawnTimer_Implementation(const float RespawnTime) {
}

void ASimPlayerController::ClientSimReset_Implementation(const bool bInIsLeavingDueToServerTravel) {
}

void ASimPlayerController::ClientShowVehicleStockpileResponse_Implementation(const EVehicleStockpileResponse Response) {
}

void ASimPlayerController::ClientShowUnrestrictedNotification_Implementation(const ERestrictedState UnrestrictedState) {
}

void ASimPlayerController::ClientShowTravelReservationAlert_Implementation() {
}

void ASimPlayerController::ClientShowTeamKillWarning_Implementation() {
}

void ASimPlayerController::ClientShowStockpileAlert_Implementation(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo) {
}

void ASimPlayerController::ClientShowSquadClaimedNotification_Implementation(const FName CodeName, const int32 SquadId) {
}

void ASimPlayerController::ClientShowShippableResponse_Implementation(const uint8 ShippableStatus) {
}

void ASimPlayerController::ClientShowRocketFacilityResponse_Implementation(const ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult) {
}

void ASimPlayerController::ClientShowResistanceStart_Implementation(const EFactionId ConquestWinner) {
}

void ASimPlayerController::ClientShowRecentItem_Implementation(const FName& ItemCodeName, const int32 StackSize) {
}

void ASimPlayerController::ClientShowPlacementStatus_Implementation(const EPlacementStatus PlacementStatus) {
}

void ASimPlayerController::ClientShowMapNames_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientShowLongRangeArtilleryResponse_Implementation(AActor* LongRangeArtillery, const uint8 Response) {
}

void ASimPlayerController::ClientShowIntelCenterResponse_Implementation(AActor* IntelCenter, const uint8 Response) {
}

void ASimPlayerController::ClientShowHUDNotification_Implementation(const EHUDNotification HUDNotification) {
}

void ASimPlayerController::ClientShowHUDCodeNameNotification_Implementation(const EHUDNotification HUDNotification, const FName CodeName) {
}

void ASimPlayerController::ClientShowHUDClaimNotification_Implementation(const EHUDNotification HUDNotification, const AActor* Actor, const int32 SquadId) {
}

void ASimPlayerController::ClientShowHUDActorNotification_Implementation(const EHUDNotification HUDNotification, const AActor* Actor) {
}

void ASimPlayerController::ClientShowEventVictory_Implementation(const EFactionId FactionWinner) {
}

void ASimPlayerController::ClientShowDeployResponse_Implementation(const EDeployResponse DeployResponse) {
}

void ASimPlayerController::ClientShowDeploymentFailureNotification_Implementation(const uint8 Reason) {
}

void ASimPlayerController::ClientShowConquestVictory_Implementation(const FConquestOverNotificationInfo ConquestOverInfo) {
}

void ASimPlayerController::ClientShowBuildResponse_Implementation(const FBuildResponse& BuildResponse) {
}

void ASimPlayerController::ClientShowBorderBaseResponse_Implementation(const uint8 Response) {
}

void ASimPlayerController::ClientShowAchievementCompleted_Implementation(const FWarAchievementCompletedInfo CompletionInfo) {
}

/*void ASimPlayerController::ClientSetVehicleReplicatedBasedMovement_Implementation(ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo) {
}*/

void ASimPlayerController::ClientSetTestFlag_Implementation(ETestFlags Flag, bool bIsSet) {
}

void ASimPlayerController::ClientSetSpawnPointResponse_Implementation(AStructure* NewSpawnPoint, const uint8 Response) {
}

void ASimPlayerController::ClientSetShowVisibilityDebug_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientSetShowStructureStats_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientSetShowHP_Implementation(const bool Show) {
}

void ASimPlayerController::ClientSetNoVehicleBuild_Implementation(bool InNoVehicleBuildEnabled) {
}

void ASimPlayerController::ClientSetMapTeleport_Implementation(const bool bIsAwaitingClick) {
}

void ASimPlayerController::ClientSetItemAsStackableCheat_Implementation(const FName& ItemCodeName) {
}

void ASimPlayerController::ClientSetFastBuild_Implementation(const bool bIsFastBuild) {
}

void ASimPlayerController::ClientSetExternalWarServiceConnectionInfo_Implementation(const FString& ExternalWarServiceUri, const FString& InSignedPlayerRequestData) {
}

void ASimPlayerController::ClientSetCinematicCamera_Implementation(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled) {
}

void ASimPlayerController::ClientSetCameraFlags_Implementation(int32 Flags) {
}

void ASimPlayerController::ClientRespawnAtAssignedPoint_Implementation(const uint8 Category) {
}

void ASimPlayerController::ClientResistanceStartingAlert_Implementation(int32 SecondsUntilResistanceEnd, int32 Duration) {
}

void ASimPlayerController::ClientResetStructureClaimStatus_Implementation(AStructure* TargetStructure) {
}

void ASimPlayerController::ClientResetRetrieveState_Implementation(const ETransactionResponse Response) {
}

void ASimPlayerController::ClientRefinementOrderResponse_Implementation(const ERefinementOrderResponse Response) {
}

void ASimPlayerController::ClientReconnectToVoiceChat_Implementation() {
}

void ASimPlayerController::ClientReceiveTransactionResponse_Implementation(const ETransactionResponse Response) {
}

void ASimPlayerController::ClientReceiveTechResponse_Implementation(const uint8 TechResponse) {
}

void ASimPlayerController::ClientReceiveStockpileAccessEvents_Implementation(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index, const FStockpileEventsResponse& EventsResponse) {
}

void ASimPlayerController::ClientReceiveRocketAlert_Implementation(const FRPCRocketPreLaunchAlert& Alert) {
}

void ASimPlayerController::ClientReceiveRegionMinimalData_Implementation(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData) {
}

void ASimPlayerController::ClientReceiveOnlineIDInfo_Implementation(const FString& OnlineID) {
}

void ASimPlayerController::ClientReceiveNetworkTechStatus_Implementation(const AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus) {
}

void ASimPlayerController::ClientReceiveMapItemDetails_Implementation(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails) {
}

void ASimPlayerController::ClientReceiveListeningAreaDetails_Implementation(const TArray<FListeningAreaDebugData>& InListeningAreaDetails) {
}

void ASimPlayerController::ClientReceiveInfo_Implementation() {
}

void ASimPlayerController::ClientReceiveEmptyMapItemDetails_Implementation(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber) {
}

void ASimPlayerController::ClientQueueMainMenuPrompt_Implementation(const EMainMenuPromptType PromptType) {
}

void ASimPlayerController::ClientOnVehicleMountError_Implementation() {
}

void ASimPlayerController::ClientOnVehicleExitFailure_Implementation() {
}

void ASimPlayerController::ClientOnVacateSuccess_Implementation() {
}

void ASimPlayerController::ClientOnSubmitPatientsResponse_Implementation(const ESubmitPatientsResponse Response) {
}

void ASimPlayerController::ClientOnShippableResponse_Implementation(const uint8 ShippableStatus) {
}

void ASimPlayerController::ClientOnRocketGroundZeroEvent_Implementation(const FVector_NetQuantize Location) {
}

void ASimPlayerController::ClientOnProfileDownloadComplete_Implementation(const bool bIsRegionTravelling) {
}

void ASimPlayerController::ClientOnOccupySuccess_Implementation(bool OccupantCrouches) {
}

void ASimPlayerController::ClientOnOccupyError_Implementation() {
}

void ASimPlayerController::ClientOnLongRangeArtilleryFireShellEvent_Implementation(AActor* LongRangeArtillery, const FVector_NetQuantize Location) {
}

void ASimPlayerController::ClientOnIntelCenterFireListeningAreaEvent_Implementation(AActor* IntelCenter, const FVector_NetQuantize Location) {
}

void ASimPlayerController::ClientOnChannelJoinTokenReceived_Implementation(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& ChannelJoinToken) {
}

void ASimPlayerController::ClientNotifyCommend_Implementation(const FString& PlayerName, const FString& OnlineID) {
}

void ASimPlayerController::ClientModDestroySignPost_Implementation() {
}

void ASimPlayerController::ClientJoinWarResponse_Implementation(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId) {
}

void ASimPlayerController::ClientGetSquadIdFromSquadName_Implementation(const FString& SquadName) {
}

void ASimPlayerController::ClientFullRepairResponse_Implementation(const EFullRepairResponse Response) {
}

void ASimPlayerController::ClientEnterBuildGhostMode_Implementation(const FName& StructureCodeName) {
}

void ASimPlayerController::ClientDeleteMapPost_Implementation(const FString& OnlineID) {
}

void ASimPlayerController::ClientCreateDebugMapPost_Implementation(const FText& Text) {
}

void ASimPlayerController::ClientCopyToClipboard_Implementation(const FString& String) {
}

void ASimPlayerController::ClientConfirmAdminDestroy_Implementation(const FName ObjectName) {
}

void ASimPlayerController::ClientClearSquadsConditional_Implementation(const int32 MinAgeMinutes, const int32 MaxHistoricalPlayers) {
}

void ASimPlayerController::ClientClearSquadList_Implementation() {
}

void ASimPlayerController::ClientClearAdminAlertMessages_Implementation() {
}

void ASimPlayerController::ClientClaimStructureIsland_Implementation(const int32 Amount) {
}

void ASimPlayerController::ClientChatMessage_Implementation(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled) {
}

void ASimPlayerController::ClientBeaconLoadTest_Implementation(FRegionConnectionInfo RegionConnectionInfo, const FString& MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration) {
}

void ASimPlayerController::ClientAlertMessage_Implementation(const FString& MsgString, const float DurationSecs) {
}

void ASimPlayerController::ClientAlertAFKTimeoutPending_Implementation() {
}

void ASimPlayerController::ClientAdminMessageUnformatted_Implementation(const FString& Message) {
}

void ASimPlayerController::ClientAdminMessageList_Implementation(const TArray<FString>& MessageList) {
}

void ASimPlayerController::ClientAdminMessage_Implementation(const FString& S) {
}

void ASimPlayerController::ClientAdminDownloadClientConfig_Implementation(const FName ClientConfigTypeName) {
}

void ASimPlayerController::ClientAdminAlertMessage_Implementation(const FString& MsgString, const float DurationSecs) {
}

void ASimPlayerController::Client_ShowTargetingRangeResults_Implementation(float Damage, float Range) {
}

void ASimPlayerController::Client_ShowHUDNotificationDuration_Implementation(const FText& NotificationText, float Duration) {
}

void ASimPlayerController::Client_ShowHUDNotification_Implementation(const FText& NotificationText) {
}

void ASimPlayerController::Client_ShowCommendNotification_Implementation(const FText& NotificationText) {
}

void ASimPlayerController::CaptureDebugScreenshot() {
}

void ASimPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimPlayerController, CommsRating);
    DOREPLIFETIME(ASimPlayerController, SpawnPointInfo);
    DOREPLIFETIME(ASimPlayerController, PlaceInDeploymentQueue);
    DOREPLIFETIME(ASimPlayerController, UserComponent);
    DOREPLIFETIME(ASimPlayerController, UserComponents);
}

ASimPlayerController::ASimPlayerController() {
    this->MapIntelRefreshRate = 1.00f;
    this->MapIntelItemsPerChunk = 100;
    this->MapIntelProviderRangeSquared = 4000000.00f;
    this->TravelCountdownDuration = 5.00f;
    this->BuildGhost = NULL;
    this->UpgradeBuildGhost = NULL;
    this->DeathCamTime = 3.00f;
    this->ChatRange = 2500.00f;
    this->PlaceInDeploymentQueue = -1;
    this->UserComponent = NULL;
}

