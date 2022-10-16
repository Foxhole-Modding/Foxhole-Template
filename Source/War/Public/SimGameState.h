#pragma once
#include "CoreMinimal.h"
#include "WarGameState.h"
#include "WarAchievementProgress.h"
#include "TownHallInfo.h"
#include "GameplayFlags.h"
#include "WorldWeatherState.h"
#include "EFactionId.h"
#include "EWarPhase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SimGameState.generated.h"

class AMapIntelligence;
class ATechTree;

UCLASS(Blueprintable)
class WAR_API ASimGameState : public AWarGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FTownHallInfo> TownHallInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameplayFlags, meta=(AllowPrivateAccess=true))
    FGameplayFlags GameplayFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMapIntelligence* MapIntelligence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ConcreteSettleDurationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWarAchievementProgress WarAchievementProgress;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint32 StructureLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldWeatherState, meta=(AllowPrivateAccess=true))
    FWorldWeatherState WorldWeatherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PrevWindSpeedTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 PrevWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextWindSpeedTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 NextWindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PrevWindDirectionTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 PrevWindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NextWindDirectionTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 NextWindDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColonialTechTree, meta=(AllowPrivateAccess=true))
    ATechTree* ColonialTechTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WardenTechTree, meta=(AllowPrivateAccess=true))
    ATechTree* WardenTechTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFactionId ConquestWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWarPhase WarPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime WarPhaseEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPatchRequired;
    
public:
    ASimGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldWeatherState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WardenTechTree();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayFlags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ColonialTechTree();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastToggleEarlyWarRestrictionOverride();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastRemoveOfflinePlayerState(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWindVector() const;
    
};

