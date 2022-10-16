#pragma once
#include "CoreMinimal.h"
#include "Vector2D_NetQuantize.h"
#include "OutpostInfo.generated.h"

USTRUCT(BlueprintType)
struct FOutpostInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D_NetQuantize Location;
    
    WAR_API FOutpostInfo();
};

