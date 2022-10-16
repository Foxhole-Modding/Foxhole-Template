#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "ERocketLaunchSequence.h"
#include "RocketLaunchCodeInfo.h"
#include "UObject/NoExportTypes.h"
#include "WarGridCoordinate.h"
#include "EWorldConquestMapId.h"
#include "FuelTank.h"
#include "RocketFacility.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ARocketFacility : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BuildLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ERocketLaunchSequence Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRocketLaunchCodeInfo SelectedCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector SelectedStrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString LastBuilderOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 RequiredSquadMembers;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 SelectedCodeEntryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId TargetRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate Coordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingTimeToLaunch, meta=(AllowPrivateAccess=true))
    float RemainingTimeToLaunch;
    
public:
    ARocketFacility();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingTimeToLaunch();
    
};

