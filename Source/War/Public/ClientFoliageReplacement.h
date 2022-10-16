#pragma once
#include "CoreMinimal.h"
#include "EClientFoliageReplacementState.h"
#include "GameFramework/Actor.h"
#include "ClientFoliageReplacement.generated.h"

class UFoliageInstancedStaticMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AClientFoliageReplacement : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientFoliageReplacementState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFoliageInstancedStaticMeshComponent* OriginalComponent;
    
    AClientFoliageReplacement();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged(EClientFoliageReplacementState NewState);
    
};

