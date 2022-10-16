#pragma once
#include "CoreMinimal.h"
#include "ERegionLogEntryType.h"
#include "UObject/NoExportTypes.h"
#include "RegionLogEntry.generated.h"

USTRUCT(BlueprintType)
struct FRegionLogEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegionLogEntryType Type;
    
    UPROPERTY(EditAnywhere)
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationY;
    
    UPROPERTY(EditAnywhere)
    uint32 RegionLogId;
    
    WAR_API FRegionLogEntry();
};

