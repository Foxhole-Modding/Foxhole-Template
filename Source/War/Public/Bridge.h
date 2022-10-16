#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "Bridge.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ABridge : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BelowBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* AboveBlockingArea;
    
    ABridge();
};

