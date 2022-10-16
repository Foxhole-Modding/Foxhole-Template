#pragma once
#include "CoreMinimal.h"
#include "BatchModifiedRegimentIdMessage.generated.h"

USTRUCT(BlueprintType)
struct FBatchModifiedRegimentIdMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineIdList;
    
    WAR_API FBatchModifiedRegimentIdMessage();
};

