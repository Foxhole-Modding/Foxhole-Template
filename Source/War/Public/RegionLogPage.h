#pragma once
#include "CoreMinimal.h"
#include "RegionLogEntry.h"
#include "RegionLogPage.generated.h"

USTRUCT(BlueprintType)
struct FRegionLogPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegionLogEntry> EntryList;
    
    WAR_API FRegionLogPage();
};

