#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "CraterMeshStop.h"
#include "Crater.generated.h"

UCLASS(Blueprintable)
class WAR_API ACrater : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCraterMeshStop> MeshStops;
    
    ACrater();
};

