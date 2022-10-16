#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "WarServiceReplicatedState.h"
#include "WarRichTextStyle.h"
#include "DeploymentQueueEntry.h"
#include "WarServerQueue.h"
#include "WarAPIClient.h"
#include "MapPostManager.h"
#include "RegionZoneManager.h"
#include "SquadManager.h"
#include "ExternalWarServiceReplicatedState.h"
#include "RegimentManager.h"
#include "WarGameInstance.generated.h"

class USoundMix;
class UWarSaveGame;
class UBorderBaseManager;
class AMapList;
class UObjectLibrary;
class UServerSettings;
class UWeatherManager;
class UWarDiscordClient;
class UWorldResourceSpawner;
class UPlayerProfileManager;
class UClientStreamingManager;
class UTravelManager;
class ULandscapeDeformationManager;
class UCrossRegionActorManager;
class UWarSessionSettings;
class UClientConfigManager;
class ALoreList;
class UDiscordRichPresence;
class AWarBeaconHost;
class UMonumentManager;
class UWarVoiceClient;

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* BaseSoundMix;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* BuildableStructureLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* ModificationTemplateLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* ItemPickupLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* VehicleLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* CharacterLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBorderBaseManager* BorderBaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherManager* WeatherManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldResourceSpawner* WorldResourceSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarDiscordClient* DiscordClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarSaveGame* CurrentWarSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerProfileManager* PlayerProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UServerSettings* ServerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClientStreamingManager* StreamingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTravelManager* TravelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeDeformationManager* LandscapeDeformationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrossRegionActorManager* CrossRegionActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapList* MapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarSessionSettings* WarSessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoreList* LoreList;
    
    UPROPERTY(EditAnywhere)
    uint32 LastColonialCount;
    
    UPROPERTY(EditAnywhere)
    uint32 LastWardenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BadWordList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordRichPresence* DiscordRichPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordRichPresenceApplicationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarBeaconHost* WarBeaconHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMonumentManager* MonumentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServerQueue ColonialQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServerQueue WardenQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeploymentQueueEntry> DeploymentQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarVoiceClient* WarVoiceClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClientConfigManager* ClientConfigManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarAPIClient WarAPIClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostManager MapPostManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarRichTextStyle RichTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionZoneManager RegionZoneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadManager SquadManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegimentManager RegimentManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServiceReplicatedState WarServiceReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalWarServiceReplicatedState ExternalWarServiceReplicatedState;
    
    UWarGameInstance();
    UFUNCTION(BlueprintCallable)
    void ResetServerTravelStatusOnClient();
    
    UFUNCTION()
    uint32 GetLocalNetworkVersion();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpProperties(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& PropertyNameFilter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCollisionProfiles(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& ProfileNameFilters);
    
};

