#pragma once
#include "CoreMinimal.h"
#include "MapIntelligenceTypeIcon.h"
#include "MapIntelligenceTypeConfig.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelligenceTypeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirySeconds;
    
    UPROPERTY(EditAnywhere)
    FMapIntelligenceTypeIcon FactionIconBrush[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresPlayerLineOfSight;
    
    WAR_API FMapIntelligenceTypeConfig();
};

