#pragma once
#include "CoreMinimal.h"
#include "SquadStorableCrate.generated.h"

USTRUCT(BlueprintType)
struct FSquadStorableCrate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int16 Quantity;
    
    WAR_API FSquadStorableCrate();
};

