#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "WorldResourceSpawner.generated.h"

class AWorldResource;

UCLASS(Blueprintable)
class WAR_API UWorldResourceSpawner : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldResource> ResourceClass;
    
public:
    UWorldResourceSpawner();
};

