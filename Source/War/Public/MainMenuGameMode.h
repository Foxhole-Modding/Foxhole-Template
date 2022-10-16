#pragma once
#include "CoreMinimal.h"
#include "WarGameMode.h"
#include "MainMenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AMainMenuGameMode : public AWarGameMode {
    GENERATED_BODY()
public:
    AMainMenuGameMode();
};

