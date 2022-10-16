#pragma once
#include "CoreMinimal.h"
#include "SavedShippableData.h"
#include "FreighterCargo.generated.h"

USTRUCT(BlueprintType)
struct FFreighterCargo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedShippableData SavedData;
    
    WAR_API FFreighterCargo();
};

