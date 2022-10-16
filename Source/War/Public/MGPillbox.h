#pragma once
#include "CoreMinimal.h"
#include "FoxholeTurret.h"
#include "MGPillbox.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AMGPillbox : public AFoxholeTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    AMGPillbox();
};

