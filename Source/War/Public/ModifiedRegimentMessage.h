#pragma once
#include "CoreMinimal.h"
#include "Regiment.h"
#include "ModifiedRegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FModifiedRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegiment ModifiedRegiment;
    
    WAR_API FModifiedRegimentMessage();
};

