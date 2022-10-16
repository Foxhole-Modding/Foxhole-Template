#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "BackpackItemPickup.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class WAR_API ABackpackItemPickup : public AItemPickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> BackpackMeshes;
    
public:
    ABackpackItemPickup();
};

