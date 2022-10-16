#pragma once
#include "CoreMinimal.h"
#include "SavedActor.h"
#include "UObject/NoExportTypes.h"
#include "SavedRecoveryVehicle.generated.h"

USTRUCT(BlueprintType)
struct FSavedRecoveryVehicle : public FSavedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastAutoSaveTimestamp;
    
    WAR_API FSavedRecoveryVehicle();
};

