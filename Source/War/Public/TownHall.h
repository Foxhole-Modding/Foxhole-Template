#pragma once
#include "CoreMinimal.h"
#include "Base.h"
#include "TownHall.generated.h"

class UMapIntelligenceSourceComponent;

UCLASS(Blueprintable)
class WAR_API ATownHall : public ABase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;
    
public:
    ATownHall();
};

