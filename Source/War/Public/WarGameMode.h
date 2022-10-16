#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "WarGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class WAR_API AWarGameMode : public AGameMode {
    GENERATED_BODY()
public:
    AWarGameMode();
};

