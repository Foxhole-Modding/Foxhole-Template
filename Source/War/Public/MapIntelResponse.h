#pragma once
#include "CoreMinimal.h"
#include "MapIntelList.h"
#include "MapIntelResponse.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapIntelList> MapIntelLists;
    
    WAR_API FMapIntelResponse();
};

