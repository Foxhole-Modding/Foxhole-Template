#pragma once
#include "CoreMinimal.h"
#include "ClientShardConfig.h"
#include "EStockpileEntryType.h"
#include "WarPlayerController.h"
#include "RegionMapData.h"
#include "ActivityStateDebugTrace.h"
#include "GenericTeamAgentInterface.h"
#include "EFactoryQueueType.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSpawnPointsInfo.h"
#include "CommsRating.h"
#include "StructureStats.h"
#include "ETestEnum.h"
#include "ConnectorConfiguration.h"
#include "WarMessageTest.h"
#include "RepSnapInfo.h"
#include "EUserVoteKickCategory.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERefineryOrderAccessLevel.h"
#include "StockpileItemFilter.h"
#include "PlayerActivity.h"
#include "StockpileEntry.h"
#include "EFactoryOrderAccess.h"
#include "SpecializedFactoryOrderItem.h"
#include "EWorldConquestMapId.h"
#include "EOutfitType.h"
#include "CharacterCustomizationInfo.h"
#include "EVoiceChannelType.h"
#include "RocketBuildRequest.h"
#include "RocketLaunchCodeRequest.h"
#include "ERefineryClaimType.h"
#include "EChatChannel.h"
#include "Engine/EngineTypes.h"
#include "EChatLanguage.h"
#include "VoiceLoginInfo.h"
#include "RegionMinimalData.h"
#include "RegionLogPage.h"
#include "RegionConnectionInfo.h"
#include "WarReplicatedTweakables.h"
#include "GameplayParams.h"
#include "EVehicleStockpileResponse.h"
#include "ERestrictedState.h"
#include "StockpileBroadcastAlertInfo.h"
#include "ERocketConsoleActionResult.h"
#include "EFactionId.h"
#include "EPlacementStatus.h"
#include "ETransactionResponse.h"
#include "EHUDNotification.h"
#include "EDeployResponse.h"
#include "ConquestOverNotificationInfo.h"
#include "BuildResponse.h"
#include "WarAchievementCompletedInfo.h"
#include "GameFramework/Character.h"
#include "ETestFlags.h"
#include "ERefinementOrderResponse.h"
#include "StockpileEventsResponse.h"
#include "RPCRocketPreLaunchAlert.h"
#include "TechTreeComponentNetworkStatus.h"
#include "MapItemDetails.h"
#include "ListeningAreaDebugData.h"
#include "EMainMenuPromptType.h"
#include "ESubmitPatientsResponse.h"
#include "Engine/NetSerialization.h"
#include "EJoinWarResponse.h"
#include "EFullRepairResponse.h"
#include "SimPlayerController.generated.h"

class UActorComponent;
class AStructure;
class ASimVehicle;
class UUserComponent;
class ABuildGhost;
class ASimPlayerState;
class ASignPost;
class AVehicleFactory;
class USpecializedFactoryComponent;
class AAssemblyStation;
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
class ARocketFacility;
class APlayerState;

UCLASS(Blueprintable)
class WAR_API ASimPlayerController : public AWarPlayerController, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AStructure> UpgradeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIntelRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapIntelItemsPerChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIntelProviderRangeSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelCountdownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCommsRating CommsRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlayerSpawnPointsInfo SpawnPointInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildGhost* BuildGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildGhost* UpgradeBuildGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaceInDeploymentQueue, meta=(AllowPrivateAccess=true))
    int32 PlaceInDeploymentQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    UUserComponent* UserComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_UserComponents, meta=(AllowPrivateAccess=true))
    TArray<UUserComponent*> UserComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructureStats> StatsForNearybyStructures;
    
public:
    ASimPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Exec)
    void WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, const FString& TestStr, const ETestEnum TestEnum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TunnelNetworkDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleStabilityDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMouseCursor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StructureIslandDebugDraw();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAllVehicles(int32 PerVehicleCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAllStructures(int32 PerStructureCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerWhisper(const FString& TargetOnlineID, const FString& Message);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerWarMessageTest(const FWarMessageTest& Message);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoteOnSignPost(const bool bIsUpVote, ASignPost* TargetSignPost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoteOnChatMessage(const FString& TargetOnlineID, const bool bIsUpVote);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoteKick(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeVehicle(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeTargetStructure(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeStaticTargetStructure(AStructure* TargetStructure, FName UpgradeCodename);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateInfo(const uint32 Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnpackShippableCrate(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnCrateItems(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTransferItem(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleVehicleLock(ASimVehicle* SimVehicle);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTimeRequest(float RequestTime);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToLocation(const FVector& WorldPosition);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncWorldPlayerId();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncTravelMaps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncTimeToNextWar();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncStaticRegionMapData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncDynamicRegionMapData();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSwapEquipment(const int8 BackpackItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitVehicleToStockpile(AStorageFacility* StorageFacility, ASimVehicle* SimVehicle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSubmitTech(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitStructureToStockpile(AStorageFacility* StorageFacility, ABuildableStructure* Structure, const FString& TargetStockpileName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitStarterKit(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitResourceConverterOrder(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitRefinementOrderWithLimit(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitPatients(AHospital* Hospital);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitLargeItem(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsToStockpileFromItemHolderWithItemFilter(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsToStockpileFromItemHolder(AActor* DestinationActor, UItemHolderComponent* SourceItemHolder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered(AActor* DestinationActor, const FStockpileEntry ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpile(AActor* DestinationActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitCrateToStockpile(AStorageFacility* StorageFacility, AShippableCrate* ShippableCrate, const bool bSubmitToPublic);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitContainerToStockpile(AStructure* Structure, AContainer* Container);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopRefuelingActorInUse(AActor* RefuelSourceActor, AActor* RefuelTargetActor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSplitItemStack(UItemHolderComponent* TargetItemHolder, int8 FromIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpectateSpawnPoint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpectate(const int8 Delta, const bool bAllowSpectatorCameraFallback);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnAllVehicles(int32 PerVehicleCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnAllStructures(int32 PerStructureCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSortWreckage(UItemHolderComponent* SourceItemHolder);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehicleLock(ASimVehicle* SimVehicle, const bool bIsLocked);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetStructureColor(AShippingContainer* ShippingContainer, const uint8 Color);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpawnPoint(AStructure* NewSpawnPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRefineryOrderAccessLevel(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPowerGridConnectionState(AActor* LHSActor, AActor* RHSActor, const bool bWantsItConnected);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetOutfitType(const EOutfitType OutfitType, const bool bBypassVipCheck);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInventorySourceOverride(UActorComponent* InventorySourceOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCharacterCustomizationInfo(const FCharacterCustomizationInfo CustomizationInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCameraFlags(int32 Flags, AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAdminCommandTarget(AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnDefault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnAtNearestStaticBase();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnAtNearestSafeHouse();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRespawnAtAssignedPoint(const uint8 Category);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetPowerGridConnectionState(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetInventorySourceOverride();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestStructureInfo(AStructure* Structure, const bool bIsInitialRequest);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestStockpileAccessEvents(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestRegionMinimalData(const EWorldConquestMapId MapId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestRegionLog(const uint32 LogPageIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestOfflineActivityLog(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestNetworkTechStatus(const AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestMapItemDetails(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestMapIntelligence();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestActivityLog(ASimPlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRefuelActorInUse(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReconnectToVoiceChat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReceieveInfo();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPackageShippable(AActor* ShippableActor, const bool bWantsItPackaged);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnUserResetAFKTimer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnPlayerLogOut();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnNewBaseAccessed(AStructure* AccessedBaseStructure);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerJoinWar(const uint8 TeamId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGenerateVivoxChannelJoinToken(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFullRepair(AVehicleFactory* VehicleFactory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFlagDisruptivePlacement(ATeamStructure* TeamStructure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterRocketLaunchCode(const FRocketLaunchCodeRequest& Request);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEditSignPost(const FText& Text, ASignPost* TargetSignPost);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropItem(UItemHolderComponent* ItemHolder, const int8 ItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachUserComponents();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachLargeItem(ASimVehicle* DetachTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroySignPost(ASignPost* TargetSignPost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeployLargeItem(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDemolishStructure(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCrateItems(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerConfirmAdminDestroy(const FName ObjectName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommend(const FString& PlayerOnlineId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommandStringID(const FString& ID);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCommandID(int8 ID);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearSquad(UObject* InCoalitionAssignable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimStructureIsland(AStructure* Structure, const int32 SelectedSquadID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimStructure(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimResourceConverterOrder(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChat(const FString& Msg, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeVehicleFuelType(ASimVehicle* SimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeFactoryOrderAccess(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRetrieval();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelPackaging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildVehicleFromStructure(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildVehicle(const FName CodeName, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildStructureFromStructure(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildStructure(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildRocket(const FRocketBuildRequest& Request);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildRailVehicle(const FName CodeName, const FRepSnapInfo SnapInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachUserComponents(AActor* AssociatedActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachLargeItem(AActor* AttachTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAssignSquad(UObject* InCoalitionAssignable, const int32 NewSquadID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAssembleStructureOrVehicle(AAssemblyStation* AssemblyStation, const FName CodeName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UserComponents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaceInDeploymentQueue();
    
    UFUNCTION(BlueprintCallable)
    void OnClientTravelWaitComplete(const FString& URL);
    
public:
    /*UFUNCTION(Client, Reliable)
    void DrawDebugVehicleHitbox(ASimVehicle* SimVehicle, FVector Position, FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn);*/
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRecreateLandscapeHoles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawCurrentLandscape();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientWorldChatMessage(const FString& Message, const FString& SenderName, const FString& SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWarEndingAlert(int32 SecondsUntilWarEnd, int32 Duration);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVoiceLogin(const FVoiceLoginInfo& VoiceLoginInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateUTCOffset(const int64 ServerDateTimeTicks);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateShardConfig(FClientShardConfig ClientShardConfig);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateRegionMinimalData(const FRegionMinimalData& RegionMinimalData);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateRegionLog(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateActivityLog(const FPlayerActivity& Activity);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace, ASimCharacter* SimCharacter);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTimeResponse(float RequestTime, float ServerTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeleportToMapMarker(const FString& TargetMapMarkerName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncWorldPlayerId(const FString& ID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncTravelMaps(const TArray<FRegionConnectionInfo>& TravelMaps);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncTimeToNextWar(const int32 Seconds);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStructureClaimStatus(AStructure* TargetStructure, const int32 SquadId, const int32 SecondsRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStructureBuilderInfo(AStructure* TargetStructure, const FString& BuilderOnlineID, const FString& BuilderName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStatsForNearbyStructures(const TArray<FStructureStats>& StatList);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStaticRegionMapData(const FRegionMapData& StaticMapData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncReplicatedTweakables(const FWarReplicatedTweakables& NewWarRepTweakables);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncMapIntelligence(const bool bOnlySyncIfMapIsOpen);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncGameplayParams(const FGameplayParams& GameplayParams);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncDynamicRegionMapData(const FRegionMapData& RegionMapData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSurrenderAlert();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopSpectateTargetTick();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartRespawnTimer(const float RespawnTime);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSimReset(const bool bInIsLeavingDueToServerTravel);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowVehicleStockpileResponse(const EVehicleStockpileResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowUnrestrictedNotification(const ERestrictedState UnrestrictedState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTravelReservationAlert();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTeamKillWarning();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowStockpileAlert(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowSquadClaimedNotification(const FName CodeName, const int32 SquadId);
    
    UFUNCTION(Client, Reliable)
    void ClientShowShippableResponse(const uint8 ShippableStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowRocketFacilityResponse(const ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowResistanceStart(const EFactionId ConquestWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowRecentItem(const FName& ItemCodeName, const int32 StackSize);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowPlacementStatus(const EPlacementStatus PlacementStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowMapNames(const bool bShow);
    
    UFUNCTION(Client, Reliable)
    void ClientShowLongRangeArtilleryResponse(AActor* LongRangeArtillery, const uint8 Response);
    
    UFUNCTION(Client, Reliable)
    void ClientShowIntelCenterResponse(AActor* IntelCenter, const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDNotification(const EHUDNotification HUDNotification);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDCodeNameNotification(const EHUDNotification HUDNotification, const FName CodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDClaimNotification(const EHUDNotification HUDNotification, const AActor* Actor, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDActorNotification(const EHUDNotification HUDNotification, const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowEventVictory(const EFactionId FactionWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowDeployResponse(const EDeployResponse DeployResponse);
    
    UFUNCTION(Client, Unreliable)
    void ClientShowDeploymentFailureNotification(const uint8 Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowConquestVictory(const FConquestOverNotificationInfo ConquestOverInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowBuildResponse(const FBuildResponse& BuildResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientShowBorderBaseResponse(const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowAchievementCompleted(const FWarAchievementCompletedInfo CompletionInfo);
    
    //UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetVehicleReplicatedBasedMovement(ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetTestFlag(ETestFlags Flag, bool bIsSet);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSpawnPointResponse(AStructure* NewSpawnPoint, const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowVisibilityDebug(const bool bShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowStructureStats(const bool bShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowHP(const bool Show);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetNoVehicleBuild(bool InNoVehicleBuildEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetMapTeleport(const bool bIsAwaitingClick);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetItemAsStackableCheat(const FName& ItemCodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFastBuild(const bool bIsFastBuild);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetExternalWarServiceConnectionInfo(const FString& ExternalWarServiceUri, const FString& InSignedPlayerRequestData);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCinematicCamera(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCameraFlags(int32 Flags);
    
    UFUNCTION(Client, Reliable)
    void ClientRespawnAtAssignedPoint(const uint8 Category);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResistanceStartingAlert(int32 SecondsUntilResistanceEnd, int32 Duration);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetStructureClaimStatus(AStructure* TargetStructure);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetRetrieveState(const ETransactionResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRefinementOrderResponse(const ERefinementOrderResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReconnectToVoiceChat();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveTransactionResponse(const ETransactionResponse Response);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveTechResponse(const uint8 TechResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveStockpileAccessEvents(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index, const FStockpileEventsResponse& EventsResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveRocketAlert(const FRPCRocketPreLaunchAlert& Alert);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveRegionMinimalData(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveOnlineIDInfo(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveNetworkTechStatus(const AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveListeningAreaDetails(const TArray<FListeningAreaDebugData>& InListeningAreaDetails);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveInfo();
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveEmptyMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQueueMainMenuPrompt(const EMainMenuPromptType PromptType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVehicleMountError();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVehicleExitFailure();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVacateSuccess();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnSubmitPatientsResponse(const ESubmitPatientsResponse Response);
    
    UFUNCTION(Client, Reliable)
    void ClientOnShippableResponse(const uint8 ShippableStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRocketGroundZeroEvent(const FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnProfileDownloadComplete(const bool bIsRegionTravelling);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOccupySuccess(bool OccupantCrouches);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOccupyError();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnLongRangeArtilleryFireShellEvent(AActor* LongRangeArtillery, const FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnIntelCenterFireListeningAreaEvent(AActor* IntelCenter, const FVector_NetQuantize Location);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnChannelJoinTokenReceived(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& ChannelJoinToken);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCommend(const FString& PlayerName, const FString& OnlineID);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientModDestroySignPost();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientJoinWarResponse(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGetSquadIdFromSquadName(const FString& SquadName);
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientFullRepairResponse(const EFullRepairResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterBuildGhostMode(const FName& StructureCodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDeleteMapPost(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateDebugMapPost(const FText& Text);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCopyToClipboard(const FString& String);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmAdminDestroy(const FName ObjectName);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearSquadsConditional(const int32 MinAgeMinutes, const int32 MaxHistoricalPlayers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearSquadList();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearAdminAlertMessages();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClaimStructureIsland(const int32 Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientChatMessage(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    
    UFUNCTION(Client, Reliable)
    void ClientBeaconLoadTest(FRegionConnectionInfo RegionConnectionInfo, const FString& MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertMessage(const FString& MsgString, const float DurationSecs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertAFKTimeoutPending();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessageUnformatted(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessageList(const TArray<FString>& MessageList);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessage(const FString& S);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminDownloadClientConfig(const FName ClientConfigTypeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminAlertMessage(const FString& MsgString, const float DurationSecs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowTargetingRangeResults(float Damage, float Range);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowHUDNotificationDuration(const FText& NotificationText, float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowHUDNotification(const FText& NotificationText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowCommendNotification(const FText& NotificationText);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureDebugScreenshot();
    
    
    // Fix for true pure virtual functions not being implemented
};

