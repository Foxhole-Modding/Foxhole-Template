#pragma once
#include "CoreMinimal.h"
#include "ToggleSquadPrivacyWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FToggleSquadPrivacyWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FToggleSquadPrivacyWarMessage();
};

