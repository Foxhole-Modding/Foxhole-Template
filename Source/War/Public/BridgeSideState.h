#pragma once
#include "CoreMinimal.h"
#include "BridgeSideState.generated.h"

USTRUCT(BlueprintType)
struct FBridgeSideState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsControlEnabled;
    
    WAR_API FBridgeSideState();
};

