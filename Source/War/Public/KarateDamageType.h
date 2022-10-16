#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "KarateDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKarateDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UKarateDamageType();
};

