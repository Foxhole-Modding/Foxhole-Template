#pragma once
#include "CoreMinimal.h"
#include "LocalShardProfileSerialized.h"
#include "GlobalShardProfile.h"
#include "WarPlayerProfileSerialized.generated.h"

USTRUCT(BlueprintType)
struct FWarPlayerProfileSerialized {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalShardProfile GlobalShardProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalShardProfileSerialized LocalShardProfileSerialized;
    
    WAR_API FWarPlayerProfileSerialized();
};

