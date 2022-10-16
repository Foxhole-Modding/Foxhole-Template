#pragma once
#include "CoreMinimal.h"
#include "LocalShardProfileSerialized.generated.h"

USTRUCT(BlueprintType)
struct FLocalShardProfileSerialized {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> GameServerProfileBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastWarId;
    
    WAR_API FLocalShardProfileSerialized();
};

