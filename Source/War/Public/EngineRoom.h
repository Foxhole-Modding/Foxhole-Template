#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "PowerNode.h"
#include "FuelInfo.h"
#include "PowerInfo.h"
#include "ConcreteSettler.h"
#include "EngineRoom.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class WAR_API AEngineRoom : public ATeamStructure, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelInfo, meta=(AllowPrivateAccess=true))
    FFuelInfo FuelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AEngineRoom();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelInfo();
    
    
    // Fix for true pure virtual functions not being implemented
};

