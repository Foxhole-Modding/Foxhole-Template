#pragma once
#include "CoreMinimal.h"
#include "WarLocalPlayer.h"
#include "HeadlessLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UHeadlessLocalPlayer : public UWarLocalPlayer {
    GENERATED_BODY()
public:
    UHeadlessLocalPlayer();
};

