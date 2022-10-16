#pragma once
#include "CoreMinimal.h"
#include "MapIntelligenceTypeConfig.h"
#include "GameFramework/Info.h"
#include "MapIntelligence.generated.h"

UCLASS(Blueprintable)
class WAR_API AMapIntelligence : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FMapIntelligenceTypeConfig MapIntelligenceTypeConfigs[14];
    
public:
    AMapIntelligence();
};

