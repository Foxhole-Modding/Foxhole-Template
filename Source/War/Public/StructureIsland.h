#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "EFireIntensity.h"
#include "StructureIsland.generated.h"

class AStructure;

UCLASS(Blueprintable)
class WAR_API AStructureIsland : public AActor, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Structures, meta=(AllowPrivateAccess=true))
    TArray<AStructure*> Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StructuralIntegrity;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthPoolMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFireIntensity FireIntensity;
    
    AStructureIsland();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Structures();
    
    
    // Fix for true pure virtual functions not being implemented
};

