#pragma once
#include "CoreMinimal.h"
#include "CalloutInfo.generated.h"

USTRUCT(BlueprintType)
struct FCalloutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresWorldMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalloutText;
    
    WAR_API FCalloutInfo();
};

