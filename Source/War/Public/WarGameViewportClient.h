#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "WarGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UWarGameViewportClient();
};

