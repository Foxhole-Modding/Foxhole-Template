#pragma once
#include "CoreMinimal.h"
#include "WarRecord.h"
#include "WarRecordList.generated.h"

USTRUCT(BlueprintType)
struct FWarRecordList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarRecord> WarRecordList;
    
    WAR_API FWarRecordList();
};

