#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "PowerNode.h"
#include "UObject/NoExportTypes.h"
#include "PowerInfo.h"
#include "FortObservation.generated.h"

class UMapIntelligenceSourceComponent;
class UTeamFlagMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFortObservation : public ATeamStructure, public IPowerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionCheckOverrideExtents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapIntelligenceSourceComponent* MapIntelligenceSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamFlagMeshComponent* TeamFlagMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
public:
    AFortObservation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

