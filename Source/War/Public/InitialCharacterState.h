#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.h"
#include "InitialCharacterState.generated.h"

USTRUCT(BlueprintType)
struct FInitialCharacterState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemInstances;
    
    WAR_API FInitialCharacterState();
};

